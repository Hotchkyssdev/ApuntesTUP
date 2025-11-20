USE TFI
CREATE TABLE Liquidacion (
	IDLiquidacion INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	FechaEmision DATE,
	MontoTotal DECIMAL(10,2),
	IDAcuerdo INT,
	FOREIGN KEY (IDAcuerdo) REFERENCES Acuerdo(IDAcuerdo)
);