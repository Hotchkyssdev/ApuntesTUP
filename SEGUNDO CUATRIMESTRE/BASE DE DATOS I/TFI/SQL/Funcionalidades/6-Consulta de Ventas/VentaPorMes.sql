USE TFI
SELECT 
    YEAR(FechaHora) AS Año,
    MONTH(FechaHora) AS Mes,
    SUM(PrecioTotal) AS TotalVentas
FROM Venta
GROUP BY YEAR(FechaHora), MONTH(FechaHora)
ORDER BY Año, Mes;