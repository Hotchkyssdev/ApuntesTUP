<?php
session_start();

$conn = new mysqli('localhost', 'root', '', 'biblioteca');
if ($conn->connect_error) die('Error: ' . $conn->connect_error);
$conn->set_charset('utf8mb4');

if (!isset($_SESSION['historial'])) $_SESSION['historial'] = array();
if (isset($_POST['limpiar']))       $_SESSION['historial'] = array();

// ── Leer tablas disponibles en la base de datos ───────────────
$tablas = array();
$resTabs = $conn->query('SHOW TABLES');
while ($fila = $resTabs->fetch_row()) {
    $tablas[] = $fila[0];
}

// ── Tabla seleccionada ────────────────────────────────────────
$tablasel = isset($_POST['tabla']) && in_array($_POST['tabla'], $tablas)
            ? $_POST['tabla']
            : $tablas[0];

// ── Leer columnas de la tabla seleccionada ────────────────────
$columnasMeta  = array();
$camposNumericos = array();
$compsValidos    = array('=', '!=', '>', '<', '>=', '<=', 'LIKE');

$resCols = $conn->query('SHOW COLUMNS FROM ' . $tablasel);
while ($col = $resCols->fetch_assoc()) {
    $columnasMeta[] = $col;
    // Detectar campos numéricos por el tipo
    if (preg_match('/^(int|tinyint|smallint|mediumint|bigint|decimal|float|double)/i', $col['Type'])) {
        $camposNumericos[] = $col['Field'];
    }
}

$camposValidos = array();
foreach ($columnasMeta as $col) {
    $camposValidos[] = $col['Field'];
}

// ── Leer valores del formulario ───────────────────────────────
$campoSel  = isset($_POST['campo']) && in_array($_POST['campo'], $camposValidos)
             ? $_POST['campo']
             : $camposValidos[0];

$compSel   = isset($_POST['comparador']) && in_array($_POST['comparador'], $compsValidos)
             ? $_POST['comparador']
             : '=';

$valorSel  = isset($_POST['valor']) ? trim($_POST['valor']) : '';
$ordenDesc = isset($_POST['orden_desc']);

$resultados  = array();
$columnas    = array();
$error       = '';
$sqlFinal    = '';

// ── Ejecutar consulta ─────────────────────────────────────────
if ($_SERVER['REQUEST_METHOD'] === 'POST' && $valorSel !== '' && !isset($_POST['limpiar'])) {

    $valorEscapado = $conn->real_escape_string($valorSel);

    if ($compSel === 'LIKE') {
        $valorEscapado = '%' . $valorEscapado . '%';
    }

    if (in_array($campoSel, $camposNumericos)) {
        $where = $campoSel . ' ' . $compSel . ' ' . $valorEscapado;
    } else {
        $where = $campoSel . ' ' . $compSel . " '" . $valorEscapado . "'";
    }

    $sqlFinal = 'SELECT * FROM ' . $tablasel . ' WHERE ' . $where;

    if ($ordenDesc) {
        $sqlFinal .= ' ORDER BY ' . $campoSel . ' DESC';
    }

    $res = $conn->query($sqlFinal);

    if ($res === false) {
        $error = 'Error SQL: ' . $conn->error;
        $_SESSION['historial'][] = array('sql' => $sqlFinal, 'ok' => false);
    } else {
        $columnas = $res->fetch_fields();
        while ($fila = $res->fetch_assoc()) {
            $resultados[] = $fila;
        }
        $res->free();
        $_SESSION['historial'][] = array('sql' => $sqlFinal, 'filas' => count($resultados), 'ok' => true);
    }
}

// ── Formulario ────────────────────────────────────────────────
echo '<form action="" method="POST">';

// Dropdown de tablas
echo '<label>Tabla:</label> ';
echo '<select name="tabla" onchange="this.form.submit()">';
foreach ($tablas as $t) {
    $sel = ($tablasel === $t) ? ' selected' : '';
    echo '<option value="' . $t . '"' . $sel . '>' . $t . '</option>';
}
echo '</select> ';

// Dropdown de campos
echo '<label>Campo:</label> ';
echo '<select name="campo">';
foreach ($camposValidos as $c) {
    $sel = ($campoSel === $c) ? ' selected' : '';
    // Indicar tipo de campo entre paréntesis
    $tipo = '';
    foreach ($columnasMeta as $meta) {
        if ($meta['Field'] === $c) {
            $tipo = ' (' . $meta['Type'] . ')';
            break;
        }
    }
    echo '<option value="' . $c . '"' . $sel . '>' . $c . $tipo . '</option>';
}
echo '</select> ';

// Dropdown de comparadores
echo '<label>Comparador:</label> ';
echo '<select name="comparador">';
foreach ($compsValidos as $op) {
    $sel = ($compSel === $op) ? ' selected' : '';
    echo '<option value="' . $op . '"' . $sel . '>' . $op . '</option>';
}
echo '</select> ';

// Valor
echo '<label>Valor:</label> ';
echo '<input type="text" name="valor" value="' . htmlspecialchars($valorSel) . '" placeholder="Valor a buscar"> ';

// Checkbox orden
echo '<label>';
echo '<input type="checkbox" name="orden_desc" value="1"' . ($ordenDesc ? ' checked' : '') . '> Desc.';
echo '</label> ';

echo '<button type="submit">Buscar</button>';
echo '</form>';

// ── Info de la tabla seleccionada ─────────────────────────────
echo '<br><small>Tabla: <b>' . $tablasel . '</b> — ';
echo count($camposValidos) . ' columna(s): ';
$infoCols = array();
foreach ($columnasMeta as $col) {
    $infoCols[] = $col['Field'] . ' [' . $col['Type'] . ']';
}
echo implode(', ', $infoCols) . '</small><br>';

// ── SQL generado ──────────────────────────────────────────────
if ($sqlFinal !== '') {
    echo '<p><code>' . htmlspecialchars($sqlFinal) . '</code></p>';
}

// ── Error ─────────────────────────────────────────────────────
if ($error !== '') {
    echo '<p style="color:red;font-weight:bold;">' . htmlspecialchars($error) . '</p>';
}

// ── Resultados ────────────────────────────────────────────────
if (!empty($resultados)) {
    echo count($resultados) . ' fila(s).<br>';
    echo '<table border="1" cellpadding="6" cellspacing="0">';

    echo '<tr>';
    foreach ($columnas as $col) {
        echo '<th>' . htmlspecialchars($col->name) . '</th>';
    }
    echo '</tr>';

    foreach ($resultados as $fila) {
        echo '<tr>';
        foreach ($fila as $valor) {
            if ($valor === null) {
                echo '<td><em>NULL</em></td>';
            } else {
                $dec = json_decode($valor, true);
                if (json_last_error() === JSON_ERROR_NONE && is_array($dec)) {
                    echo '<td><pre>' . htmlspecialchars(json_encode($dec, JSON_UNESCAPED_UNICODE | JSON_PRETTY_PRINT)) . '</pre></td>';
                } else {
                    echo '<td>' . htmlspecialchars((string) $valor) . '</td>';
                }
            }
        }
        echo '</tr>';
    }

    echo '</table>';
}

// ── Historial ─────────────────────────────────────────────────
if (!empty($_SESSION['historial'])) {
    echo '<br><b>Historial:</b> ';
    echo '<form action="" method="POST" style="display:inline;">';
    echo '<button type="submit" name="limpiar" value="1">Limpiar</button>';
    echo '</form>';
    echo '<ol>';
    foreach (array_reverse($_SESSION['historial']) as $h) {
        $estilo = $h['ok'] ? 'color:green' : 'color:red';
        echo '<li style="' . $estilo . '"><code>' . htmlspecialchars($h['sql']) . '</code>';
        if (isset($h['filas'])) {
            echo ' <em>(' . $h['filas'] . ' fila(s))</em>';
        }
        echo '</li>';
    }
    echo '</ol>';
}

$conn->close();
?>
