USE TFI
CREATE TABLE MaquinaExpendedora (
	NroSerie INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	Descripcion NVARCHAR(100),
	EstadoOperativo NVARCHAR(50),
	Ubicacion NVARCHAR(100),
	Marca NVARCHAR(50),
	Modelo NVARCHAR(50),
	IDEstablecimiento INT,
	FOREIGN KEY (IDEstablecimiento) REFERENCES Establecimiento(IDEstablecimiento)
);