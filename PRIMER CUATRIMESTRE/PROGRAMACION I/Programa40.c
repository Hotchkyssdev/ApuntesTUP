#include <stdio.h>

int main() {
	int A[3][3], B[3][3], C[3][3];
	int fila, columna, posicionMultiplicacion;
	printf("Ingrese los elementos de la primera matriz (A): \n");
	for (fila = 0; fila < 3; fila++) {
		for (columna = 0; columna < 3; columna++) {
			printf("A[%d][%d]: ", fila, columna);
			scanf("%d", &A[fila][columna]);
		}
	}
	printf("Ingrese los elementos de la segunda matriz (B): \n");
	for (fila = 0; fila < 3; fila++) {
		for (columna = 0; columna < 3; columna++) {
			printf("B[%d][%d]: ", fila, columna);
			scanf("%d", &B[fila][columna]);
		}
	}
	for (fila = 0; fila < 3; fila++) {
		for (columna = 0; columna < 3; columna++) {
			C[fila][columna] = 0;
			for (posicionMultiplicacion = 0; posicionMultiplicacion < 3; posicionMultiplicacion++) {
				C[fila][columna] += A[fila][posicionMultiplicacion] * B[posicionMultiplicacion][columna];
			}
		}
	}
	printf("\nMatriz resultante (A x B): \n");
	for (fila = 0; fila < 3; fila++) {
		for (columna = 0; columna < 3; columna++) {
			printf("%d\t", C[fila][columna]);
		}
		printf("\n");
	}
	return 0;
}
