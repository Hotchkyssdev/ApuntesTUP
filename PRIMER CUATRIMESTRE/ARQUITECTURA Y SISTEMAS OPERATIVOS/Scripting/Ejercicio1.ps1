$carpeta = "$HOME\Desktop"

Get-ChildItem -Path $carpeta -File | ForEach-Object {
    Write-Output "Archivo: $($_.Name) - Tamaño: $($_.Length) bytes"
}

