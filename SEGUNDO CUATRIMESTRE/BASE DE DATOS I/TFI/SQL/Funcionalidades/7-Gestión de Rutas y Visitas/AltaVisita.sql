USE TFI
INSERT INTO Visita
(fechaHoraInicio, fechaHoraFin, Observaciones, IDRuta, LegajoRepositor)
VALUES
	(GETDATE(), DATEADD(MINUTE, 20, GETDATE()), 'Todo OK', 3, 1);