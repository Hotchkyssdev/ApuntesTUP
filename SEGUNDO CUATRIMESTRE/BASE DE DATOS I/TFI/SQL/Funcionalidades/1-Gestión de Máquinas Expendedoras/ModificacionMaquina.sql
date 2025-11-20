USE TFI
UPDATE MaquinaExpendedora
SET EstadoOperativo = 'Fuera de servicio',
    Ubicacion = 'Depósito'
WHERE NroSerie = 3;