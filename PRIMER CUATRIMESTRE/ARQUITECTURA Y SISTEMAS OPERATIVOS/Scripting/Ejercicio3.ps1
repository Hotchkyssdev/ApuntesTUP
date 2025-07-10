New-Item "$HOME\Desktop\r002ejemplo.txt" -ItemType File
New-Item "$HOME\Desktop\r002archivo.dbf" -ItemType File

$carpeta = "$HOME\Desktop"  

Get-ChildItem -Path $carpeta -File | Where-Object { $_.Name -like "r002*" } | ForEach-Object {
    $nuevoNombre = $_.Name -replace "^r002", "Datos002020"
    Rename-Item -Path $_.FullName -NewName $nuevoNombre
    Write-Output "Renombrado: $($_.Name) → $nuevoNombre"
}