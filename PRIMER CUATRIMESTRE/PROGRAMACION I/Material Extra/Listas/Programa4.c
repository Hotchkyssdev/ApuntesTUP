#include <stdio.h>
#include <stdlib.h>

struct Nodo {
	int dato;
	struct Nodo* siguiente;
};

struct Nodo* crearNodo(int valor) {
	struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
	if (nuevo == NULL) {
		printf("Error: No se pudo asignar memoria.\n");
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

void imprimirLista(struct Nodo* cabeza) {
	printf("\nLista: ");
	while (cabeza != NULL) {
		printf("%d -> ", cabeza->dato);
		cabeza = cabeza->siguiente;
	}
	printf("NULL\n");
}

void eliminarValor(struct Nodo** cabeza, int valor) {
	struct Nodo* actual = *cabeza;
	struct Nodo* anterior = NULL;
	
	if (actual != NULL && actual->dato == valor) {
		*cabeza = actual->siguiente;
		free(actual);
		printf("Valor %d eliminado de la lista.\n", valor);
		return;
	}
	
	while (actual != NULL && actual->dato != valor) {
		anterior = actual;
		actual = actual->siguiente;
	}
	
	if (actual == NULL) {
		printf("Valor %d no se encontro en la lista.\n", valor);
		return;
	}
	
	anterior->siguiente = actual->siguiente;
	free(actual);
	printf("Valor %d eliminado de la lista.\n", valor);
}

int main() {
	struct Nodo* lista = NULL;
	int numero;
	char continuar;
	int eliminar;
	
	do {
		printf("Ingrese un numero entero: ");
		scanf("%d", &numero);
		agregarAlInicio(&lista, numero);
		
		printf("Otro elemento(s/n)?: ");
		scanf(" %c", &continuar);
	} while (continuar == 's' || continuar == 'S');
	
	imprimirLista(lista);
	
	printf("\nIngrese un valor a eliminar de la lista: ");
	scanf("%d", &eliminar);
	eliminarValor(&lista, eliminar);
	
	imprimirLista(lista);
	
	return 0;
}

