SELECT C.principalCargo, COUNT(I.DNIDelincuente) AS CantidadDelincuentes
FROM CASO C INNER JOIN INVOLUCRADO I
    ON C.codCaso = I.codCaso
GROUP BY C.principalCargo;