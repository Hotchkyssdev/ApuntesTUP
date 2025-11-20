USE TFI
SELECT *
FROM Venta V INNER JOIN Producto P 
	ON V.CodProducto = P.CodProducto
WHERE P.Nombre = 'Coca Cola';