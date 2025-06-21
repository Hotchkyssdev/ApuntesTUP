New-Item a1.txt -ItemType File
New-Item b2.txt -ItemType File
New-Item prueba1.txt -ItemType File
New-Item papaya.txt -ItemType File

$letra = Read-Host "Ingrese la letra inicial"

Get-ChildItem -Filter "$letra*.txt" | ForEach-Object {
    $nuevoNombre = $_.Name -replace '.txt$', '.sh'
    Rename-Item $_.FullName $nuevoNombre
    Write-Output "Renombrado: $($_.Name) -> $nuevoNombre"
}
