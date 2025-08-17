Algoritmo sin_titulo //es
	//Ambiente
	Definir I, M, N, suma Como Entero //I, M, N, suma: entero
	Definir promedio Como Real //promedio: real
	//Proceso
	Escribir "Cuantos numero va a ingresar?"
	Leer M
	suma = 0
	Para I = 1 Hasta M Hacer
		Escribir "Ingrese un numero: "
		Leer N
		suma = suma + N
	FinPara
	promedio = suma / M
	Escribir "La suma de los numeros ingresados es: ", suma
	Escribir "El promedio de los numeros es: ", promedio
FinAlgoritmo