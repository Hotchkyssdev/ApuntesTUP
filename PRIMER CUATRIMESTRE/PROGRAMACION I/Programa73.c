/*
Primer Ejercicio
Dada una matriz cuadrada de numeros enteros de 4x4 se pide:
A) Cargar la matriz. Mostrar el resultado en forma de matriz (La matriz se carga se carga usando estructuras repetitivas). 
Las dimensiones se deben especificar con #define
B) Cargar los números divisibles por 4 de la matriz en un arreglo, mostrar el arreglo por pantalla, usar una función 
para determinar si un numero es divisible por 4
C) Indicar cuantos numeros se cargaron en el arreglo
D) Ordenar el arreglo de menor a mayor, mostrar por pantalla el arreglo ordenado (Usar un procedimiento para ordenar)
E) A partir del arreglo crear una cadena formada por vocales, si el arreglo tiene el numero 1 es A, numero 4 es E, numero 8 es I, 
numero 12 es O, numero 16 es U
Usar una función de string para determinar la longitud de la cadena, en caso de que la cadena tenga elementos, 
mostrar la cadena por pantalla y verificar si es un palindromo. Usar funcion.
*/

#include <stdio.h>
#include <string.h>
#define N 4
#define MAX 100

void cargarMatriz(int matriz[N][N]) {
	int i, j;
	printf("Ingrese los valores de la matriz 4x4 \n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("Matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void mostrarMatriz(int matriz[N][N]) {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int esDivisiblepor4(int num) {
	return num % 4 == 0;
}

int cargarDivisible(int matriz[N][N], int arreglo[]) {
	int i, j, k = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (esDivisiblepor4(matriz[i][j])) {
				arreglo[k] = matriz[i][j];
				k++;
			}
		}
	}
	
	return k;
}

void mostrarArreglo(int arreglo[], int tam) {
	int i;
	for (i = 0; i < tam; i++) {
		printf("%d ", arreglo[i]);
	}
	printf("\n");
}

void ordenarArreglo(int arreglo[], int tam) {
	int i, j, temp;
	for (i = 0; i < tam; i++) {
		for (j = 0; j < tam - i - 1; j++) {
			if (arreglo[j] > arreglo[j+1]) {
				temp = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = temp;
			}
		}
	}
}

void generarCadena(int arreglo[], int cantidad) {
	char cadena[50];
	int pos = 0;
	int i;
	
	for (i = 0; i < cantidad; i++) {
		switch(arreglo[i]) {
			case 1:
				cadena[pos++] = 'A';
				break;
			case 4:
				cadena[pos++] = 'E';
				break;
			case 8:
				cadena[pos++] = 'I';
				break;
			case 12:
				cadena[pos++] = 'O';
				break;
			case 16:
				cadena[pos++] = 'U';
				break;
		}
	}
	cadena[pos] = '\0';
	
	if (pos > 0) {
		printf("\nCadena generada: %s\n", cadena);
		printf("Longitud: %d\n", (int)strlen(cadena));
		
		if (esPalindromo(cadena)) {
			printf("La cadena ES UN PALINDROMO.\n");
		} else {
			printf("La cadena NO ES UN PALINDROMO.\n");
		}
	} else {
		printf("No se genero ninguna cadena.\n");
	}
}

int esPalindromo(char cadena[]) {
	int i = 0;
	int j;
	j = strlen(cadena) - 1;
	
	while (i < j) {
		if (cadena[i] != cadena[j]) {
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}

int main() {
	int matriz[N][N];
	int arreglo[MAX];
	char cadena[50];
	int cantidad;
	
	cargarMatriz(matriz);
	printf("\nMatriz Cargada: \n");
	mostrarMatriz(matriz);
	
	cantidad = cargarDivisible(matriz, arreglo);
	printf("\nNumeros divisibles por 4: \n");
	mostrarArreglo(arreglo, cantidad);
	
	printf("\nCantidad de numeros divisibles por 4: %d\n", cantidad);
	
	ordenarArreglo(arreglo, cantidad);
	printf("\nArreglo Ordenado: \n");
	mostrarArreglo(arreglo, cantidad);
	
	generarCadena(arreglo, cantidad);
	
	return 0;
}
