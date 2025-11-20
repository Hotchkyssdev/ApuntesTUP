USE TFI
INSERT INTO Acuerdo (FechaInicio, FechaFin, TipoCondicion, ValorCondicion, Condiciones, IDEstablecimiento)
VALUES
	('2024-01-01', '2025-01-01', 'Porcentaje', 10.00, '10% de comisión', 1),
	('2024-02-01', '2025-02-01', 'Fijo', 5000.00, 'Monto mensual fijo', 2),
	('2024-03-01', '2025-03-01', 'Porcentaje', 12.00, '12% de comisión', 3),
	('2024-04-01', '2025-04-01', 'Porcentaje', 8.00, '8% de comisión', 4),
	('2024-05-01', '2025-05-01', 'Fijo', 4500.00, 'Pago mensual fijo', 5);