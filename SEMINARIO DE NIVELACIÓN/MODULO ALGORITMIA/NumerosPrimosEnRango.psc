Algoritmo NumerosPrimosEnRango //es
    // Ambiente
    Definir limInf, limSup, N, I Como Entero  //limInf, limSup, N, I: entero
	Definir esPrimo Como Logico //esPrimo: logico
    // Proceso  
    Repetir  
        Escribir "Ingrese el límite inferior (entero positivo): "  
        Leer limInf  
        Si limInf <= 0 Entonces  
            Escribir "Error: Debe ser un número positivo."  
        FinSi  
    Hasta Que limInf > 0  
    Repetir  
        Escribir "Ingrese el límite superior (entero positivo): "  
        Leer limSup  
        Si limSup <= 0 Entonces  
            Escribir "Error: Debe ser un número positivo."  
        FinSi  
        Si limSup < limInf Entonces  
            Escribir "Error: El límite superior debe ser mayor o igual al inferior."  
        FinSi  
    Hasta Que limSup > 0 Y limSup >= limInf  
    Escribir "Los números primos en el rango son: "  
    Para N = limInf Hasta limSup Hacer  
        esPrimo <- Verdadero  // Suponemos que es primo  
        Si N < 2 Entonces  
            esPrimo <- Falso  // Números menores que 2 no son primos  
        Sino  
            Para I <- 2 Hasta N - 1 Hacer  
                Si N MOD I = 0 Entonces  
                    esPrimo <- Falso  // No es primo porque es divisible  
                FinSi  
            FinPara  
        FinSi  
        Si esPrimo = Verdadero Entonces  
            Escribir N, " "  // Muestra el número primo  
        FinSi  
    FinPara  
FinAlgoritmo  
