INSERT INTO POLICIA(DNI, Nombre, Categoria, Funcion, DNI_JEFE)
VALUES
	(100, 'Ramirez', 'Comisario', 'Jefe General', NULL),
	(101, 'Romero', 'SubComisario', 'Investigador', 100),
	(102, 'Hotchkyss', 'Oficial', 'Investigador', 101),
	(103, 'Perez', 'Oficial', 'Patrulla', 101),
	(104, 'Suarez', 'Sargento', 'Patrulla', 100);