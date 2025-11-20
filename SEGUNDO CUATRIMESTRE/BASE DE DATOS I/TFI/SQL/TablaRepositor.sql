USE TFI
CREATE TABLE Repositor (
	Legajo INT PRIMARY KEY,
	FOREIGN KEY (Legajo) REFERENCES Empleado(Legajo)
);