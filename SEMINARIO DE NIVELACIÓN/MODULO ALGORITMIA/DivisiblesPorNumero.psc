Algoritmo DivisiblesPorNumero //es
    // Ambiente
    Definir N, I Como Entero  //N, I: entero
    // Proceso  
    Repetir
		Escribir "Ingrese un número para encontrar sus divisibles: "
		Leer N
		Si N <= 0 Entonces
			Escribir "Error: debe ser mayor a 0."
		FinSi
	Hasta Que N > 0
    Escribir "Los números divisibles por ", N, " son: "  
    Para I <- 1 Hasta N Hacer  
        Si N MOD I = 0 Entonces  
            Escribir I  
        FinSi  
    FinPara  
FinAlgoritmo  
