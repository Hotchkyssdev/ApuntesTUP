USE TFI
INSERT INTO Falla
(Descripcion, TipoFalla, FechaReporte, Estado, NroSerie, LegajoEmpleado)
VALUES
	('No expende producto', 'Mecánica', GETDATE(), 'Pendiente', 3, 1);