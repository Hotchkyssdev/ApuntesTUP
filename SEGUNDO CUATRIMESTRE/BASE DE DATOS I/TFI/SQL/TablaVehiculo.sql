USE TFI
CREATE TABLE Vehiculo (
	Patente CHAR(10) PRIMARY KEY NOT NULL,
	Modelo NVARCHAR(50),
	Capacidad INT,
	Estado NVARCHAR(30),
	FechaUltimoMantenimiento DATE
);