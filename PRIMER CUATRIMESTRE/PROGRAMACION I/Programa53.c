#include <stdio.h>

int main() {
	int i, j, k;
	int matriz[5][2] = {{0,0}, {1,2}, {2,4}, {3,6}, {4,8}};
	int Arreglo[10];
	int tamano;
	int temp;
	int valor;
	int inicio = 0;
	int medio, fin, encontrado;
	int suma = 0;
	tamano = sizeof(Arreglo) / sizeof(Arreglo[0]);
	encontrado = 0;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 2; j++) {
			printf("Matriz[%d][%d] = ", i, j);
			printf("%d \t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("\nMatriz Original: \n");
	for (i = 0; i < 5; i++) {
		printf("[");
		for (j = 0; j < 2; j++) {
			printf(" %d ", matriz[i][j]);
		}
		printf("]");
		printf("\n");
	}
	
	printf("\nTraspuesta: \n");
	for (j = 0; j < 2; j++) {
		printf("[");
		for (i = 0; i < 5; i++) {
			printf(" %d ", matriz[i][j]);
		}
		printf("]");
		printf("\n");
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 2; j++) {
			Arreglo[k] = matriz[i][j];
			k++;
		}
	}
	
	printf("\nMatriz convertida en arreglo: \n");
	for (i = 0; i < 10; i++) {
		printf("%d ", Arreglo[i]);
	}
	
	printf("\n\nArreglo Ordenado: \n");
	for (i = 0; i < tamano - 1; i++) {
		for (j = 0; j < tamano - i - 1; j++) {
			if (Arreglo[j] > Arreglo[j + 1]) {
				temp = Arreglo[j];
				Arreglo[j] = Arreglo[j + 1];
				Arreglo[j + 1] = temp; 
			}
		}
	}
	
	for (i = 0; i < tamano; i++) {
		printf("%d ", Arreglo[i]);
	}
	
	printf("\n\nArreglo sin duplicados: \n");
	k = 0;
	for (i = 0; i < tamano; i++) {
		if (i == 0 || Arreglo[i] != Arreglo[i - 1]) {
			Arreglo[k] = Arreglo[i];
			k++;
		}
	}
	
	for (i = 0; i < k; i++) {
		printf("%d ", Arreglo[i]);
	}
	
	tamano = k;
	fin = tamano - 1;
	printf("\n\nIngrese un valor a buscar: ");
	scanf("%d", &valor);
	while (inicio <= fin) {
		medio = (inicio + fin) / 2;
		if(Arreglo[medio] == valor) {
			printf("Valor encontrado en la posicion %d.\n", medio);
			encontrado = 1;
			break;
		} else if (Arreglo[medio] < valor) {
			inicio = medio + 1;
		} else {
			fin = medio - 1;
		}
	}
	if (!encontrado) {
		printf("Valor no encontrado en el arreglo.\n");
	}
	
	printf("\n\nSumatoria de la Matriz: \n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 2; j++) {
			suma += matriz[i][j];
		}
	}
	
	printf("Suma de todos los elementos de la matriz: %d.\n", suma);
	if (suma % i == 0) {
		printf("La suma es multiplo de la cantidad de filas (%d).\n", i);
	} else {
		printf("La suma NO es multiplo de la cantidad de filas (%d).\n", i);
	}
	
	if (suma % j == 0) {
		printf("La suma es multiplo de la cantidad de columnas (%d).\n", j);
	} else {
		printf("La suma NO es multiplo de la cantidad de columnas (%d).\n", j);
	}
	return 0;
}
