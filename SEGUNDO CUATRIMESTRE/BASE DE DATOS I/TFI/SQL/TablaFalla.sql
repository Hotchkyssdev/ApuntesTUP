USE TFI
CREATE TABLE Falla (
	IDFalla INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	Descripcion NVARCHAR(200),
	TipoFalla NVARCHAR(50),
	FechaReporte DATE,
	Estado NVARCHAR(50),
	NroSerie INT,
	LegajoEmpleado INT,
	FOREIGN KEY (NroSerie) REFERENCES MaquinaExpendedora(NroSerie),
	FOREIGN KEY (LegajoEmpleado) REFERENCES Empleado(Legajo)
);