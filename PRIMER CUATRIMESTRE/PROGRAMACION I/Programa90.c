/*
Crear un programa que permita: 
A) Encolar una serie de numeros enteros que se ingresa por teclado. Ingresar la cantidad de elementos de la cola y mostrar por pantalla si la cantidad de elementos corresponde con el valor requerido.
B) Desencolar los elementos de la cola y cargarlos en un arreglo
C) Mostrar los elementos del arreglo usando un procedimiento, respetando el orden de desencolar
D) Ordenar los elementos del arreglo, usar una función
E) Encolar los elementos del arreglo ordenado
F) Desencolar los elementos de la cola
*/

#include <stdio.h>
#include <stdlib.h>

struct Nodo {
	int valor;
	struct Nodo* siguiente;
};

void encolar(struct Nodo** frente, struct Nodo** fin, int valor) {
	struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
	nuevo->valor = valor;
	nuevo->siguiente = NULL;
	if (*fin != NULL) {
		(*fin)->siguiente = nuevo;
	} else {
		*frente = nuevo;
	}
	*fin = nuevo;
}

int desencolar(struct Nodo** frente, struct Nodo** fin) {
	int valor;
	struct Nodo* temp;
	
	if (*frente == NULL) {
		printf("La cola esta vacia.\n");
		return -1;
	}
	
	temp = *frente;
	valor = temp->valor;
	*frente = temp->siguiente;
	
	if (*frente == NULL) {
		*fin = NULL;
	}
	
	free(temp);
	return valor;
}

void mostrarArreglo(int arr[], int n) {
	int i;
	printf("Arreglo: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int* ordenarArreglo(int arr[], int n) {
	int i, j, aux;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
			}
		}
	}
	return arr;
}

int main(int argc, char *argv[]) {
	struct Nodo* frente = NULL;
	struct Nodo* fin = NULL;
	int cantidad, valor, i;
	int arreglo[100], n = 0;
	
	printf("Ingrese cantidad de elementos a la cola: ");
	scanf("%d", &cantidad);
	for (i = 0; i < cantidad; i++) {
		printf("Valor %d: ", i+1);
		scanf("%d", &valor);
		encolar(&frente, &fin, valor);
	}
	
	while (frente != NULL) {
		arreglo[n++] = desencolar(&frente, &fin);
	}
	
	printf("\nArreglo con el orden del desencolado: \n");
	mostrarArreglo(arreglo, n);
	
	ordenarArreglo(arreglo, n);
	
	for (i = 0; i < n; i++) {
		encolar(&frente, &fin, arreglo[i]);
	}
	
	printf("\nDesencolar elementos ordenados: ");
	while (frente != NULL) {
		printf("%d ", desencolar(&frente, &fin));
	}
	
	return 0;
}

