USE TFI
CREATE TABLE Producto (
	CodProducto INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	Nombre NVARCHAR(100),
	Categoria NVARCHAR(50),
	FechaVencimiento DATE,
	PrecioVenta DECIMAL(10,2)
);