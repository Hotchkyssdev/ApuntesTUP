Algoritmo sin_titulo //es
	//Ambiente
	Definir N, contador Como Entero //N, contador: entero
	//Proceso 
	Repetir
		Escribir "Ingrese un numero: "
		Leer N
		Si N <= 0 Entonces
			Escribir "Error: debe ser mayor a 0."
		FinSi
	Hasta Que N > 0 
	Mientras N > 0 Hacer
		N = trunc(N/10) //N DIV 10
		contador = contador + 1
	FinMientras
	Escribir "El numero tiene ",contador, " digitos."
FinAlgoritmo
