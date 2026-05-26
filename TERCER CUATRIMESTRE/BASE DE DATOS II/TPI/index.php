<?php
$host = "127.0.0.1";
$dbname = "resenas_db";
$user = "root";      // cambiá esto si tenés otro usuario
$pass = "";          // tu contraseña

try {
    $conexion = new PDO("mysql:host=$host;dbname=$dbname;charset=utf8mb4", $user, $pass);
    
    // Configurar errores como excepciones
    $conexion->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    echo "Conexión exitosa";
    
} catch (PDOException $e) {
    echo "Error de conexión: " . $e->getMessage();
}
?>