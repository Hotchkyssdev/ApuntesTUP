USE TFI
CREATE TABLE Tecnico (
	Legajo INT PRIMARY KEY,
	FOREIGN KEY (Legajo) REFERENCES Empleado(Legajo)
);