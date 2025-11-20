USE TFI
CREATE TABLE Pago (
	IDPago INT PRIMARY KEY IDENTITY(1,1) NOT NULL,
	FechaPago DATE,
	MontoAbonado DECIMAL(10,2),
	FormaPago NVARCHAR(50),
	IDLiquidacion INT,
	FOREIGN KEY (IDLiquidacion) REFERENCES Liquidacion(IDLiquidacion)
);