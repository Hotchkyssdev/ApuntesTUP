Algoritmo sin_titulo //es
	//Ambiente
	Definir I, N, M, resto, suma Como Entero //I, N, M, resto, suma: entero
	//Proceso 
	Escribir "Ingrese la cantidad de numeros a ingresar."
	Leer N
	Para I = 1 Hasta N Hacer
		Escribir "Ingrese un nro."
		Leer M
		resto = M MOD 10
		Escribir "El ultimo digito de ",M, " es el: ", resto
		suma = suma + resto
	FinPara
	Escribir "La suma de los ultimos digitos de los numeros ingresado es: ", suma
FinAlgoritmo