USE TFI
CREATE TABLE Ruta (
	IDRuta INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	Fecha DATE,
	LegajoRepositor INT,
	Patente CHAR(10),
	FOREIGN KEY (LegajoRepositor) REFERENCES Repositor(Legajo),
	FOREIGN KEY (Patente) REFERENCES Vehiculo(Patente)
);