SELECT C.codCalabozo, COUNT(E.DNIDelincuente) AS CantidadDelincuentes
FROM CALABOZO C LEFT JOIN ENCERRAR E
    ON C.codCalabozo = E.codCalabozo
GROUP BY C.codCalabozo;