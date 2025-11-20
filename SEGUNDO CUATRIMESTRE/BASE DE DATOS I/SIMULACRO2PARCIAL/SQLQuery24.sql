SELECT E.codCalabozo, COUNT(E.DNIDelincuente) AS CantidadDelincuentes
FROM ENCERRAR E
GROUP BY E.codCalabozo
HAVING COUNT(E.DNIDelincuente) > 5;