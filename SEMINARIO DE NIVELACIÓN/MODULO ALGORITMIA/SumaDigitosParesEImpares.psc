Algoritmo SumaDigitosParesEImpares //es 
    // Ambiente
    Definir N, digito, sumaPares, sumaImpares Como Entero  //N, digito, sumaPares, sumaImpares: entero
    // Proceso
	Repetir
		Escribir "Ingrese un número entero positivo: "  
		Leer N
		Si N <= 0 Entonces
			Escribir "Error: debe ser mayor a 0."
		FinSi
	Hasta Que N > 0 
	sumaPares := 0  
	sumaImpares := 0  
	Mientras N > 0 Hacer  
		digito := N MOD 10  // Extrae el último dígito  
		Si digito MOD 2 = 0 Entonces  
			sumaPares := sumaPares + digito  
		Sino  
			sumaImpares := sumaImpares + digito  
		FinSi  
		N := trunc(N/10) // Elimina el último dígito  //N DIV 10
	FinMientras  
	Escribir "Suma de dígitos pares: ", sumaPares  
	Escribir "Suma de dígitos impares: ", sumaImpares  
FinAlgoritmo  
