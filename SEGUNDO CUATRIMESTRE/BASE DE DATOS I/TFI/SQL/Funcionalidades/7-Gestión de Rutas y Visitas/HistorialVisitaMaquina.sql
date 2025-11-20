USE TFI
SELECT V.*
FROM Visita V INNER JOIN Contiene C 
	ON V.IDRuta = C.NroSerie
WHERE C.NroSerie = 4;