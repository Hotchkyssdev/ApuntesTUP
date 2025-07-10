#Se definen parámetros por defecto. Cuando se ejecuta el script
#se pueden pasar o no los parámetros
param(
    $origen = 'C:\temp\2022\',
    $patron = "RESOLUCION CONSEJO DIRECTIVO",
    $nuevoPatron = "RCD"
)

#Escribe el resultado de testear la existencia o no del directorio
write-host (Test-Path -Path $origen)

if ((Test-Path -Path $origen) -eq $false){
    write-host "No exite el directorio ingresado"
    exit
}

#Arma patrón de búsqueda
$pathOrigen = $origen + $patron + "*.pdf"

#Escribe patrón de búsqueda
Write-Host "Patron de Busqueda: "$pathOrigen

#Crear la lista de archivos
$archivos = Get-ChildItem -Path $pathOrigen

#Recorre la lista, crea el nuevo nombre de archivo. Lo escribe por pantalla
#luego renombre el archivo
foreach ($archivo in $archivos)
{
    $nuevoNombre = $archivo.Name.Replace($patron, $nuevoPatron)
    Write-Host ($archivo.name, $nuevoNombre)
    Rename-Item $archivo.FullName -NewName $($origen+$nuevoNombre)
}
#Escribir cantidad de archivos procesados
write-host $archivos.Length

