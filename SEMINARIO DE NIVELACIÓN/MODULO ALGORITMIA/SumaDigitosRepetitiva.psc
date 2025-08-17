Algoritmo SumaDigitosRepetitiva //es  
    // Ambiente
    Definir N, suma, digito Como Entero  //N, suma, digito: entero
    // Proceso  
	Repetir
		Escribir "Ingrese un número entero positivo: "  
		Leer N 
		Si N <= 0 Entonces
			Escribir "Error: debe ser mayor a 0."
		FinSi
	Hasta Que N > 0
	Mientras N >= 10 Hacer  // Repetir mientras tenga más de un dígito  
		suma := 0  
		Mientras N > 0 Hacer  
			digito := N MOD 10  // Extrae el último dígito  
			suma := suma + digito  // Acumula la suma  
			N := trunc(N/10) //N DIV 10  // Elimina el último dígito  
		FinMientras  
		N := suma  // Se actualiza N con la nueva suma  
	FinMientras  
	Escribir "El dígito reducido es: ", N 
FinAlgoritmo  
