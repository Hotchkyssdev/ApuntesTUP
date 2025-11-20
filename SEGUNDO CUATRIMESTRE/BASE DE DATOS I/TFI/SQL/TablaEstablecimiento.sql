USE TFI
CREATE TABLE Establecimiento (
	IDEstablecimiento INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	NombreComercial NVARCHAR(100),
	CUIT CHAR(11),
	Direccion NVARCHAR(200),
	Calle NVARCHAR(100),
	Altura NVARCHAR(10),
	CodPostal NVARCHAR(10),
	TipoLugar NVARCHAR(50),
	Descripcion NVARCHAR(100),
	IDResponsable INT,
	FOREIGN KEY (IDResponsable) REFERENCES Responsable(IDResponsable)
);