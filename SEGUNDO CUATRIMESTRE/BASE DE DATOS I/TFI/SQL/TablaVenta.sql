USE TFI
CREATE TABLE Venta (
	NroOperacion INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	FechaHora DATETIME2,
	Cantidad INT,
	PrecioTotal DECIMAL(10,2),
	MontoRecibido DECIMAL(10,2),
	NroSerie INT,
	CodProducto INT,
	FOREIGN KEY (NroSerie) REFERENCES MaquinaExpendedora(NroSerie),
	FOREIGN KEY (CodProducto) REFERENCES Producto(CodProducto)
);