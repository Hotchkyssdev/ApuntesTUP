#include <stdio.h>

int main() {
	int Arreglo[10], i = 0, suma = 0;
	float promedio, mitadPromedio;
	int posicion, valor, encontrado = 0;
	
	for (i = 0; i < 10; i++) {
		printf("Ingrese un el valor %d para el arreglo: ", i);
		scanf("%d", &Arreglo[i]);
		suma = suma + Arreglo[i];
	}
	for (i = 0; i < 10; i++) {
		printf("%d--", Arreglo[i]);
	}
	
	printf("\nSuma total de los elementos del arreglo: %d\n", suma);
	promedio = (float)suma / 10;
	printf("Promedio de los elementos del arreglos: %.2f\n", promedio);
	mitadPromedio = promedio / 2;
	printf("Mitad del promedio: %.2f\n", mitadPromedio);
	
	printf("Elementos del arreglo mayor al promedio: ");
	for (i = 0; i < 10; i++) {
		if (Arreglo[i] > mitadPromedio) {
			printf("%d--", Arreglo[i]);
		}
	}
	
	printf("\nIngrese una posicion del arreglo por teclado (0-9): ");
	scanf("%d", &posicion);
	if (posicion >= 0 && posicion < 10) {
		printf("Elemento en la posicion %d: %d\n", posicion, Arreglo[posicion]);
	} else {
		printf("Posicion invalida.\n");
	}
	
	printf("\nIngrese un valor por teclado a buscar en el arreglo: ");
	scanf("%d", &valor);
	for (i = 0; i < 10; i++) {
		if (Arreglo[i] == valor) {
			encontrado = 1;
			break;
		} 
	}
	if (encontrado) {
		printf("El valor %d pertenece al arreglo.\n", valor);
	} else {
		printf("El valor %d NO pertenece al arreglo.\n", valor);
	}
	return 0;
}
