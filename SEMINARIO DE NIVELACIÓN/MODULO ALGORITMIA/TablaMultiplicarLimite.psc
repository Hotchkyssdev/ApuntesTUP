Algoritmo sin_titulo //es
	//Ambiente 
	Definir I, N, J Como Entero //I, N, J: entero
	//Proceso 
	Repetir
		Escribir "Ingrese un numero mayor a 0 para hacer su tabla de multiplicar."
		Leer I
		Si I <= 0 Entonces
			Escribir "Error: debe ser mayor a 0."
		FinSi
	Hasta Que I > 0 
	Repetir
		Escribir "Ingrese el limite (hasta que numero multiplicar): "
		Leer N
		Si N <= 0 Entonces
			Escribir "Error: debe ser mayor a 0."
		FinSi
	Hasta Que N > 0
	Para J = 1 Hasta N Hacer
		Escribir I, " * ", J, " = ", I * J
	FinPara
FinAlgoritmo
