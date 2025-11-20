USE TFI
CREATE TABLE Visita (
	IDVisita INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	fechaHoraInicio DATETIME2,
	fechaHoraFin DATETIME2,
	Observaciones NVARCHAR(200),
	IDRuta INT,
	LegajoRepositor INT,
	FOREIGN KEY (IDRuta) REFERENCES Ruta(IDRuta),
	FOREIGN KEY (LegajoRepositor) REFERENCES Repositor(Legajo)
);