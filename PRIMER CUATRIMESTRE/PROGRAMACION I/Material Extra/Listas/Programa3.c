#include <stdio.h>
#include <stdlib.h>

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

void agregarAlInicio(struct Nodo** cabeza, int valor) {
	struct Nodo* nuevo = crearNodo(valor);
	nuevo->siguiente = *cabeza;
	*cabeza = nuevo;
}

void buscarValor(struct Nodo* cabeza, int valor) {
	while (cabeza != NULL) {
		if (cabeza->dato == valor) {
			printf("Numero %d encontrado en la lista.\n", valor);
			return;
		}
		cabeza = cabeza->siguiente;
	}
	printf("Numero %d NO ENCONTRADO en la lista.\n", valor);
}

void imprimirLista(struct Nodo* cabeza) {
	printf("\nLista Actual: ");
	while (cabeza != NULL) {
		printf("%d -> ", cabeza->dato);
		cabeza = cabeza->siguiente;
	}
	printf("NULL\n");
}

int main() {
	struct Nodo* lista = NULL;
	int valor;
	char respuesta;
	int buscar;
	
	do {
		printf("Ingrese un número entero: ");
		scanf("%d", &valor);
		agregarAlInicio(&lista, valor);
		
		printf("Otro elemento(s/n)?: ");
		scanf(" %c", &respuesta);
	} while (respuesta == 's' || respuesta == 'S');
	
	imprimirLista(lista);
	
	printf("\nIngrese un valor para buscar en la lista: ");
	scanf("%d", &buscar);
	buscarValor(lista, buscar);
	
	return 0;
}

