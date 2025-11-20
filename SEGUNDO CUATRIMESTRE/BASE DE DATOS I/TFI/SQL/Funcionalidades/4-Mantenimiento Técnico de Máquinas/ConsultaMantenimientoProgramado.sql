USE TFI
SELECT *
FROM Mantenimiento
WHERE Tipo = 'Preventivo'
  AND Fecha > GETDATE();