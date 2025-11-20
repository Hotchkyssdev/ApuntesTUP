USE TFI
SELECT M.*
FROM Mantenimiento M INNER JOIN Tecnico T 
	ON M.LegajoTecnico = T.Legajo
WHERE T.Legajo = 2;