Algoritmo sin_titulo //es
	//Ambiente
	Definir i, inf, sup, suma Como Entero //i, inf, sup, suma: entero
	//Proceso 
	Repetir
		Escribir "Ingrese el limite inferior: "
		Leer inf
		Si inf <= 0 Entonces
			Escribir "Error: debe ser mayor a 0."
		FinSi
	Hasta Que inf > 0 
	Repetir
		Escribir "Ingrese el limite superior: "
		Leer sup
		Si sup < 0 Entonces
			Escribir "Error: debe ser mayor a 0."
		FinSi
		Si sup <= inf Entonces
			Escribir "El superior debe ser mayor al inferior."
		FinSi
	Hasta Que sup > 0 y sup > inf
	Para i = inf Hasta sup Hacer
		Si i MOD 2 = 0 Entonces
			suma = suma + i
		FinSi
	FinPara
	Escribir "La suma de los pares es de: ", suma
FinAlgoritmo
