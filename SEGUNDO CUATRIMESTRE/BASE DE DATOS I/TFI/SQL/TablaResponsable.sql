USE TFI
CREATE TABLE Responsable (
	IDResponsable INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	Nombre NVARCHAR(100),
	Apellido NVARCHAR(100),
	Telefono NVARCHAR(20),
	CorreoElectronico NVARCHAR(100)
);