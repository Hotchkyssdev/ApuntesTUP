USE TFI
SELECT *
FROM Acuerdo
WHERE IDEstablecimiento = 2
  AND FechaFin >= GETDATE();
