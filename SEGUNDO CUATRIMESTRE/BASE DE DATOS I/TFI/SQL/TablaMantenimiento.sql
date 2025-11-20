USE TFI
CREATE TABLE Mantenimiento (
	IDMantenimiento INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	Tipo NVARCHAR(50),
	Fecha DATE,
	Descripcion NVARCHAR(200),
	Costo DECIMAL(10,2),
	NroSerie INT,
	LegajoTecnico INT,
	FOREIGN KEY (NroSerie) REFERENCES MaquinaExpendedora(NroSerie),
	FOREIGN KEY (LegajoTecnico) REFERENCES Tecnico(Legajo)
);