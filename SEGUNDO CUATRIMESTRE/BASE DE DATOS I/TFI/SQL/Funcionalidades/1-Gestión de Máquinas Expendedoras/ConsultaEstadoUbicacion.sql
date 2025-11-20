USE TFI
SELECT 
    M.NroSerie,
    M.Descripcion,
    M.EstadoOperativo,
    M.Ubicacion,
    E.NombreComercial AS Establecimiento
FROM MaquinaExpendedora M INNER JOIN Establecimiento E 
	ON M.IDEstablecimiento = E.IDEstablecimiento;