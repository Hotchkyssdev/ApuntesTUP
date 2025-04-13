#include <stdio.h>

int main() {
	int ArregloA[10], ArregloB[10], ArregloC[10];
	int cont;
	for (cont = 0; cont < 10; cont++) {
		printf("Ingrese un valor para el Arreglo A: ");
		scanf("%d", &ArregloA[cont]);
	}
	printf("\n");
	for (cont = 0; cont < 10; cont++) {
		printf("Ingrese un valor para el Arreglo B: ");
		scanf("%d", &ArregloB[cont]);
	}
	for (cont = 0; cont < 10; cont++) {
		ArregloC[cont] = ArregloA[cont] + ArregloB[cont];
	}
	printf("\n");
	for (cont = 0; cont < 10; cont++) {
		printf("Elemento %d del Arreglo C: %d\n", cont, ArregloC[cont]);
	}
	return 0;
}
