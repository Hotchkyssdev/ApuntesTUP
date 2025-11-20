USE TFI
CREATE TABLE Acuerdo (
	IDAcuerdo INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	FechaInicio DATE,
	FechaFin DATE,
	TipoCondicion NVARCHAR(50),
	ValorCondicion DECIMAL(10,2),
	Condiciones NVARCHAR(200),
	IDEstablecimiento INT,
	FOREIGN KEY (IDEstablecimiento) REFERENCES Establecimiento(IDEstablecimiento)
);