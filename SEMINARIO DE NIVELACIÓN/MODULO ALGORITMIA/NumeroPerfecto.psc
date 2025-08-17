Algoritmo NumeroPerfecto //es  
    // Ambiente
    Definir N, I, suma Como Entero  //N, I, suma: entero
    // Proceso  
	Repetir
		Escribir "Ingrese un número entero positivo: "  
		Leer N
		Si N <= 0 Entonces
			Escribir "Error: debe ser mayor a 0."
		FinSi
	Hasta Que N > 0
	suma := 0  // Inicializamos la suma de los divisores propios  
	Para I = 1 Hasta N - 1 Hacer  
		Si N MOD I = 0 Entonces  // Verificamos si es divisor  
			suma := suma + I  // Acumulamos la suma de los divisores  
		FinSi  
	FinPara  
	Si suma = N Entonces  
		Escribir N, " es un número perfecto."  
	Sino  
		Escribir N, " no es un número perfecto."  
	FinSi  
FinAlgoritmo  
