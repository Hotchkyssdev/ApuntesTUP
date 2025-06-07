#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Nodo {
	int dato;
	struct Nodo* siguiente;
};

struct Nodo* crearNodo(int valor) {
	struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
	if (nuevo == NULL) {
		printf("Error: no se pudo asignar memoria.\n");
		exit(1);
	} 
	nuevo->dato = valor;
	nuevo->siguiente = NULL;
	return nuevo;
}

void imprimirLista(struct Nodo* cabeza) {
	printf("\nLista: ");
	while (cabeza != NULL) {
		printf("%d -> ", cabeza->dato);
		cabeza = cabeza->siguiente;
	}
}

void liberarLista(struct Nodo* cabeza) {
	struct Nodo* temp;
	while (cabeza != NULL) {
		temp = cabeza;
		cabeza = cabeza->siguiente;
		free(temp);
	}
}

void agregarAlInicio(struct Nodo** cabeza, int valor) {
	struct Nodo* nuevo = crearNodo(valor);
	nuevo->siguiente = *cabeza;
	*cabeza = nuevo;
}

void agregarAlMedio(struct Nodo** cabeza, int valor) {
	struct Nodo* nuevo = crearNodo(valor);
	struct Nodo* temp = *cabeza;
	int contador, medio, i;
	nuevo->dato = valor;
	nuevo->siguiente = NULL;
	
	if (*cabeza == NULL || (*cabeza)->siguiente == NULL) {
		nuevo->siguiente = *cabeza;
		*cabeza = nuevo;
		return;
	}
	
	contador = 0;
	while (temp != NULL) {
		contador++;
		temp = temp->siguiente;
	}
	medio = contador / 2;
	temp = *cabeza;
	for (i = 0; i < medio - 1; i++) {
		temp = temp->siguiente;
	}
	nuevo->siguiente = temp->siguiente;
	temp->siguiente = nuevo;
}

void agregarAlFinal(struct Nodo** cabeza, int valor) {
	struct Nodo* nuevo = crearNodo(valor);
	if (*cabeza == NULL) {
		*cabeza = nuevo;
	} else {
		struct Nodo* actual = *cabeza;
		while (actual->siguiente != NULL) {
			actual = actual->siguiente;
		}
		actual->siguiente = nuevo;
	}
}

void eliminarNodo(struct Nodo** cabeza, int valor) {
	struct Nodo* temp = *cabeza;
	struct Nodo* anterior = NULL;
	while (temp != NULL && temp->dato != valor) {
		anterior = temp;
		temp = temp->siguiente;
	}
	if (temp == NULL) {
		printf("Valor no encontrado en la lista.\n");
		return;
	}
	if (anterior == NULL) {
		*cabeza = temp->siguiente;
	} else {
		anterior->siguiente = temp->siguiente;
	}
	free(temp);
	printf("Nodo con valor %d eliminado.\n", valor);
}

int main() {
	struct Nodo* lista = NULL;
	int opcion, valor;
	do {
		printf("\n\n---MENU---\n");
		printf("1. Agregar Nodo al Final.\n");
		printf("2. Agregar Nodo al Inicio.\n");
		printf("3. Agregar Nodo al Medio.\n");
		printf("4. Eliminar Nodo.\n");
		printf("5. Mostrar Lista.\n");
		printf("6. Salir.\n");
		printf("Seleccione una opcion: ");
		scanf("%d", &opcion);
		
		switch(opcion) {
			case 1:
				printf("Ingrese un valor entero: ");
				scanf("%d", &valor);
				agregarAlFinal(&lista, valor);
				break;
			case 2:
				printf("Ingrese un valor entero: ");
				scanf("%d", &valor);
				agregarAlInicio(&lista, valor);
				break;
			case 3:
				printf("Ingrese un valor entero: ");
				scanf("%d", &valor);
				agregarAlMedio(&lista, valor);
				break;
			case 4:
				printf("Ingrese un valor entero a eliminar: ");
				scanf("%d", &valor);
				eliminarNodo(&lista, valor);
			break;
			case 5:
				imprimirLista(lista);
				break;
			case 6:
				liberarLista(lista);
				printf("Memoria liberada. Adios.\n");
				break;
			default:
				printf("Opcion invalida.\n");
		}
	} while (opcion != 6);
	return 0;
}

