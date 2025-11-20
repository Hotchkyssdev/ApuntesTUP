USE TFI
CREATE TABLE Compra (
	IDCompra INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	Fecha DATE,
	MontoTotal DECIMAL(10,2),
	IDProveedor INT,
	FOREIGN KEY (IDProveedor) REFERENCES Proveedor(IDProveedor)
);