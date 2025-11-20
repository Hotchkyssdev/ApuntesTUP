USE TFI
CREATE TABLE Proveedor (
	IDProveedor INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	Nombre NVARCHAR(100),
	CUIT CHAR(11),
	Direccion NVARCHAR(200),
	Calle NVARCHAR(100),
	Altura NVARCHAR(10),
	CodPostal NVARCHAR(10),
	Telefono NVARCHAR(20),
	CorreoElectronico NVARCHAR(100)
);