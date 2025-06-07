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

void imprimirLista(struct Nodo* cabeza) {
	printf("\nLista: ");
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
	do {
		printf("Ingrese un número entero: ");
		scanf("%d", &valor);
		agregarAlInicio(&lista, valor);
		
		printf("Otro elemento(s/n)?: ");
		scanf(" %c", &respuesta);
	} while (respuesta == 's' || respuesta == 'S');
	
	imprimirLista(lista);
	return 0;
}
