/*
Escribir un programa que permita cargar como entrada una matriz de 3x3 de numeros enteros por teclado

Mostrar la matriz usando un procedimiento

Usar una sentencia switch para seleccionar el calculo que desea realizar:

1. Calcular la posicion del punto de sillas si existe. Usar un procedimiento o funcion segun considere necesario

2. Un punto de silla de una matriz es un elemento que es a la vez el elemento más grande de su columna y el elemento más pequeño de su fila

3. Determinar si la matriz es un cuadrado magico o no. Un cuadrado magico es una matriz de 3x3 formada por numeros formados del 1 al 9 donde la sumas de sus filas
sus columnas y sus diagonales son identicas. Usar un procedimiento o funcion segun considere necesario
*/

#include <stdio.h>
#include <stdbool.h>

#define TAMANIO 3

void cargarMatriz(int matriz[TAMANIO][TAMANIO]) {
	int i, j;
	printf("Ingrese los elementos de la matriz 3x3: \n");
	for (i = 0; i < TAMANIO; i++) {
		for (j = 0; j < TAMANIO; j++) {
			printf("Matriz[%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void imprimirMatriz(int matriz[TAMANIO][TAMANIO]) {
	int i, j;
	printf("\nMatriz Ingresada:\n");
	for (i = 0; i < TAMANIO; i++) {
		for (j = 0; j < TAMANIO; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

int matrizEnRango(int matriz[TAMANIO][TAMANIO]) {
	int i, j;
	for (i = 0; i < TAMANIO; i++) {
		for (j = 0; j < TAMANIO; j++) {
			if (matriz[i][j] < 1 || matriz[i][j] > 9) {
				return 0;
			}
		}
	}
	return 1;
}

void puntoDeSilla(int matriz[TAMANIO][TAMANIO]) {
	bool encontrado;
	bool esMayorColumna;
	int i, j, k;
	int minFila, colMin;
	
	encontrado = false;
	
	for (i = 0; i < TAMANIO; i++) {
		minFila = matriz[i][0];
		colMin = 0;
		
		for (j = 1; j < TAMANIO; j++) {
			if (matriz[i][j] < minFila) {
				minFila = matriz[i][j];
				colMin = j;
			}
		}
		
		esMayorColumna = true;
		for (k = 0; k < TAMANIO; k++) {
			if (matriz[k][colMin] > minFila) {
				esMayorColumna = false;
				break;
			}
		}
		
		if (esMayorColumna) {
			printf("\nPunto de silla encontrado en [%d][%d] = %d\n", i, colMin, minFila);
			encontrado = true;
		}
	}
	
	if (!encontrado) {
		printf("\nNo se encontró ningun punto de silla.\n");
	}
}

bool cuadradoMagico(int matriz[TAMANIO][TAMANIO]) {
	int suma = 0;
	int i, j;
	int sumaFila, sumaCol;
	int diagonal1 = 0, diagonal2 = 0;
	
	for (j = 0; j < TAMANIO; j++) {
		suma += matriz[0][j];
	}
	
	for (i = 0; i < TAMANIO; i++) {
		sumaFila = 0;
		for (j = 0; j < TAMANIO; j++) {
			sumaFila += matriz[i][j];
		}
		if (sumaFila != suma) {
			return 0;
		}
	}
	
	for (j = 0; j < TAMANIO; j++) {
		sumaCol = 0;
		for (i = 0; i < TAMANIO; i++) {
			sumaCol += matriz[i][j];
		}
		if (sumaCol != suma) {
			return 0;
		}
	}
	
	diagonal1 = matriz[0][0] + matriz[1][1] + matriz[2][2];
	diagonal2 = matriz[0][2] + matriz[1][1] + matriz[2][0];
	
	if (diagonal1 != suma || diagonal2 != suma) {
		return 0;
	}
	
	return 1;
}

int main() {
	int matriz[TAMANIO][TAMANIO];
	int opcion;
	
	cargarMatriz(matriz);
	imprimirMatriz(matriz);
	
	printf("\nSeleccione una opcion:\n");
	printf("1. Calcular el punto de silla (si existe)\n");
	printf("2. Determinar si es un cuadrado magico\n");
	printf("Ingrese su opcion: ");
	scanf("%d", &opcion);
	
	switch (opcion) {
		case 1:
			puntoDeSilla(matriz);
			break;
		case 2:
			if (!matrizEnRango(matriz)) {
				printf("\nError: Todos los elementos deben estar entre 1 y 9.\n");
				return 1;
			} else {
				if (cuadradoMagico(matriz)) {
					printf("\nLa matriz es un cuadrado magico\n");
				} else {
					printf("\nLa matriz NO es un cuadrado magico\n");
				}
			}
			
			break;
		default:
			printf("Opcion invalida\n");
	}
	
	return 0;
}

