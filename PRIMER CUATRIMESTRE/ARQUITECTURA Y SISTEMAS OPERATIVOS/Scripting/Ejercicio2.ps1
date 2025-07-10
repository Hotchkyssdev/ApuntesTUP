New-Item "$HOME\Desktop\ejemplo1.dbf" -ItemType File
New-Item "$HOME\Desktop\ejemplo2.cdx" -ItemType File

$carpeta = "$HOME\Desktop"

Get-ChildItem -Path $carpeta -Filter *.dbf | ForEach-Object {
    Write-Output "Archivo .dbf: $($_.Name) - Tamaño: $($_.Length) bytes"
}

Get-ChildItem -Path $carpeta -Filter *.cdx | ForEach-Object {
    Write-Output "Archivo .cdx: $($_.Name) - Tamaño: $($_.Length) bytes"
}
