$archivos = Get-ChildItem -Path "C:\Users\NoxiePC\Desktop" -File | Where-Object { -not $_.Attributes.ToString().Contains("Hidden") }

$i = 1
foreach ($archivo in $archivos) {
    Write-Output "Archivo ${i}: $($archivo.Name)"
    $i++
}
