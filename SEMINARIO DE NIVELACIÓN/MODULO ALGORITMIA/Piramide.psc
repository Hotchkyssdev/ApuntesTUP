Algoritmo PiramideNumeros  //es
    // Ambiente
	Definir N, I, J Como Entero //N, I, J: entero
	//Proceso 
	Repetir
		Escribir "Ingrese un numero: "
		Leer N
		Si N <= 0 Entonces
			Escribir "Error: debe ser mayor a 0."
		FinSi
	Hasta Que N > 0
	Para I = 1 Hasta N Hacer
		Para J = 1 Hasta I Hacer
			Escribir Sin Saltar J
		FinPara
		Escribir ""
	FinPara
FinAlgoritmo  
