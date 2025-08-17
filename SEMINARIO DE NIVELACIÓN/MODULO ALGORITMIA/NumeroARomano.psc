Algoritmo NumeroARomano  //es
    // Ambiente
    Definir N Como Entero  //N: entero
    Definir romano Como Cadena  //romano: AN()
    // Proceso 
	Repetir
		Escribir "Ingrese un número entre 1 y 3999: "  
		Leer N 
		Si N < 1 O N > 3999 Entonces
			Escribir "Error: Ingrese un número válido (1 - 3999)." 
		FinSi
	Hasta Que N < 1 O N > 3999
    romano <- ""  
	Mientras num >= 1000 Hacer  
		romano <- romano + "M"  
		num <- num - 1000  
	FinMientras  
	Si num >= 900 Entonces  
		romano <- romano + "CM"  
		num <- num - 900  
	FinSi  
	Mientras num >= 500 Hacer  
		romano <- romano + "D"  
		num <- num - 500  
	FinMientras  
	Si num >= 400 Entonces  
		romano <- romano + "CD"  
		num <- num - 400  
	FinSi  
	Mientras num >= 100 Hacer  
		romano <- romano + "C"  
		num <- num - 100  
	FinMientras  
	Si num >= 90 Entonces  
		romano <- romano + "XC"  
		num <- num - 90  
	FinSi  
	Mientras num >= 50 Hacer  
		romano <- romano + "L"  
		num <- num - 50  
	FinMientras  
	Si num >= 40 Entonces  
		romano <- romano + "XL"  
		num <- num - 40  
	FinSi  
	Mientras num >= 10 Hacer  
		romano <- romano + "X"  
		num <- num - 10  
	FinMientras  
	Si num >= 9 Entonces  
		romano <- romano + "IX"  
		num <- num - 9  
	FinSi  
	Mientras num >= 5 Hacer  
		romano <- romano + "V"  
		num <- num - 5  
	FinMientras  
	Si num >= 4 Entonces  
		romano <- romano + "IV"  
		num <- num - 4  
	FinSi  
	Mientras num >= 1 Hacer  
		romano <- romano + "I"  
		num <- num - 1  
	FinMientras  
	Escribir "El número en romano es: ", romano  
FinAlgoritmo  
