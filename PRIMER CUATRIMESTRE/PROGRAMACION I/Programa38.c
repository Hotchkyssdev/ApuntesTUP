#include <stdio.h>

int main() {
	int ArregloA[5], ArregloB[5], ArregloC[5];
	int cont;
	for (cont = 0; cont < 5; cont++) {
		printf("Ingrese un valor para el Arreglo A: ");
		scanf("%d", &ArregloA[cont]);
	}
	printf("\n");
	for (cont = 0; cont < 5; cont++) {
		printf("Ingrese un valor para el Arreglo B: ");
		scanf("%d", &ArregloB[cont]);
	}
	printf("\n");
	for (cont = 0; cont < 5; cont++) {
		printf("Ingrese un valor para el Arreglo C: ");
		scanf("%d", &ArregloC[cont]);
	}
	printf("\n");
	for (cont = 0; cont < 5; cont++) {
		printf("| %d | %d | %d |\n", ArregloA[cont], ArregloB[cont], ArregloC[cont]);
	}
	return 0;
}
