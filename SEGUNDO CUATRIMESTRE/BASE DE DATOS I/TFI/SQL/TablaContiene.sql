USE TFI
CREATE TABLE Contiene (
	NroSerie INT,
	CodProducto INT,
	CantidadActual INT,
	CantidadRetirada INT,
	FechaUltimaReposicion DATE,
	PRIMARY KEY (NroSerie, CodProducto),
	FOREIGN KEY (NroSerie) REFERENCES MaquinaExpendedora(NroSerie),
	FOREIGN KEY (CodProducto) REFERENCES Producto(CodProducto)
);