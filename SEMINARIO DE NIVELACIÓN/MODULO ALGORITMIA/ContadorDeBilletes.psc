Algoritmo ContadorDeBilletes //es
	//Ambiente
	Definir dinero Como Entero //dinero: entero
	//Proceso 
	Repetir
		Escribir "Ingrese el monto: "
		Leer dinero
		Si dinero <= 0 Entonces
			Escribir "Error: debe ser positivo."
		FinSi
	Hasta Que dinero > 0 
	Escribir "Billetes de 1000: ", trunc(dinero/1000) // dinero DIV 1000
	dinero = dinero MOD 1000
	Escribir "Billetes de 500: ", trunc(dinero/500) // dinero DIV 500
	dinero = dinero MOD 500
	Escribir "Billetes de 200: ", trunc(dinero/200) // dinero DIV 200
	dinero = dinero MOD 200
	Escribir "Billetes de 100: ", trunc(dinero/100) // dinero DIV 100
	dinero = dinero MOD 100
	Escribir "Billetes de 50: ", trunc(dinero/50) // dinero DIV 50
	dinero = dinero MOD 50
	Escribir "Billetes de 20: ", trunc(dinero/20) // dinero DIV 20
	dinero = dinero MOD 20
	Escribir "Billetes de 10: ", trunc(dinero/10) // dinero DIV 10
	dinero = dinero MOD 10
	Escribir "Monedas de 5: ", trunc(dinero/5) // dinero DIV 5
	dinero = dinero MOD 5
	Escribir "Monedas de 2: ", trunc(dinero/2) // dinero DIV 2
	dinero = dinero MOD 2
	Escribir "Monedas de 1: ", trunc(dinero/1) // dinero DIV 1
	dinero = dinero MOD 1
FinAlgoritmo
	