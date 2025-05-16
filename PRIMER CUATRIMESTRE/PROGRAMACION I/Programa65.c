/*
Diseñar un programa que permita:
A) Cargar un arreglo entero de 10 elementos
B) Hacer la carga del arreglo en etapa de declaracion
C) Mostrar el contenido del arreglo usando un procedimiento
D) Indicar cuantos numeros pares tiene el arreglo. Usar una función para determinar si el numero es par o no
*/

#include <stdio.h>

int esPar(int numero);
void MostrarArreglo(int arreglo[], int tamanio);


int main() {
	int cantidadpares = 0;
	int i;
	int Arreglo[10] = {1,2,3,4,5,6,7,8,9,10};
	
	MostrarArreglo(Arreglo, 10);
	
	for (i = 0; i < 10; i++) {
		if (esPar(Arreglo[i])) {
			cantidadpares++;
		}
	}
	
	printf("La cantidad de numeros pares del arreglo es: %d.\n", cantidadpares);
	return 0;
}

int esPar(int numero) {
	return numero % 2 == 0;
}

void MostrarArreglo(int arreglo[], int tamanio) {
	int i;
	printf("Contenido del Arreglo.\n");
	for (i = 0; i < tamanio; i++) {
		printf("%d ", arreglo[i]);
	}
	printf("\n");
}

