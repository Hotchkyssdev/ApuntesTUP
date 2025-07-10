New-Item "$HOME\Desktop\Datos002020test.txt" -ItemType File

$origen = "$HOME\Desktop"
$destino = "$HOME\Documents"

Get-ChildItem -Path $origen -Filter "Datos002020*" -File | ForEach-Object {
    Move-Item -Path $_.FullName -Destination $destino
    Write-Output "Movido: $($_.Name) → $destino"
}