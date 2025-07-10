New-Item -Path "$HOME\Desktop\ejemplos" -ItemType Directory
New-Item "$HOME\Desktop\ejemplos\archivo1.txt" -ItemType File

$origen = "$HOME\Desktop\ejemplos"
$destino = "$HOME\Documents"

if (Test-Path -Path $origen) {
    Copy-Item -Path "$origen\*" -Destination $destino -Recurse -Force
    Write-Output "Archivos copiados de '$origen' a '$destino'"
} else {
    Write-Output "La carpeta origen no existe: $origen"
}
