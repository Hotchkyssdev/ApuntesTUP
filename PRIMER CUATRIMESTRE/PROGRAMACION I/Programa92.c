/*
Calcular la potencia de un numero usando una funcion recursiva
*/

#include <stdio.h>

int potencia(int base, int exponente) {
	if (exponente == 0) {
		return 1;
	} else if (exponente < 0) {
		printf("No se puede usar un exponente negativo.\n");
		return -1;
	} else {
		return base * potencia(base, exponente - 1);
	}
}

int main() {
	int base, exponente, resultado;
	
	printf("Ingrese la base: ");
	scanf("%d", &base);
	printf("Ingrese el exponente: ");
	scanf("%d", &exponente);
	
	resultado = potencia(base, exponente);
	
	if (resultado != -1) {
		printf("%d elevado a %d es: %d\n", base, exponente, resultado);
	} else {
		printf("Error: exponente negativo no soportado.\n");
	}
	
	return 0;
}

