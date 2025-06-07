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

void agregarAlFinal(struct Nodo** cabeza, int valor) {
	struct Nodo* nuevo = crearNodo(valor);
	struct Nodo* actual = *cabeza;
	
	nuevo->dato = valor;
	nuevo->siguiente = NULL;
	
	if (*cabeza == NULL) {
		*cabeza = nuevo;
		return;
	}
	
	while (actual->siguiente != NULL) {
		actual = actual->siguiente;
	}
	actual->siguiente = nuevo;
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
	char continuar, opcion;
	
	do {
		printf("Ingrese un numero entero: ");
		scanf("%d", &valor);
		
		printf("Donde desea insertar?\n");
		printf("Al Inicio.\n");
		printf("Al Final.\n");
		printf("Seleccione una opción: (i para inicio, f para final): ");
		scanf(" %c", &opcion);
		
		if (opcion == 'i' || opcion == 'I') {
			agregarAlInicio(&lista, valor);
		} else if (opcion == 'f' || opcion == 'F') {
			agregarAlFinal(&lista, valor);
		} else {
			printf("Opcion no valida. No se inserto ningun valor.\n");
		}
		
		printf("Desea insertar otro numero? (s/n): ");
		scanf(" %c", &continuar);
	} while (continuar == 's' || continuar == 'S');
	
	imprimirLista(lista);
	return 0;
}

