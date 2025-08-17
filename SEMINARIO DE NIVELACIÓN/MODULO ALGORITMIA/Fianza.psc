Algoritmo sin_titulo //es
	//Ambiente
	Definir monto Como Entero //monto: entero
	Definir cuota Como Real //cuota: real
	//Proceso 
	Repetir
		Escribir "Ingrese el monto: "
		Leer monto
		Si monto <= 0 Entonces
			Escribir "Error: debe ser positivo."
		FinSi
	Hasta Que monto > 0 
	Si monto >= 100000 Entonces
		cuota = monto * 0.03
	SiNo
		cuota = monto * 0.04
	FinSi
	Escribir "La cuota es: ", cuota
FinAlgoritmo
