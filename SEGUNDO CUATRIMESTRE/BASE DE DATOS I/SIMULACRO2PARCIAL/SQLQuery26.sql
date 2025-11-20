SELECT C.principalCargo, COUNT(I.DNIDelincuente) * 100.0 /
     (SELECT COUNT(*) FROM INVOLUCRADO) AS Porcentaje
FROM CASO C INNER JOIN INVOLUCRADO I
    ON C.codCaso = I.codCaso
GROUP BY C.principalCargo;