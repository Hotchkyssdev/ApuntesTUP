USE TFI
CREATE TABLE Incluye (
	IDCompra INT,
	CodProducto INT,
	Cantidad INT,
	PrecioUnitario DECIMAL(10,2),
	PRIMARY KEY (IDCompra, CodProducto),
	FOREIGN KEY (IDCompra) REFERENCES Compra(IDCompra),
	FOREIGN KEY (CodProducto) REFERENCES Producto(CodProducto)
);