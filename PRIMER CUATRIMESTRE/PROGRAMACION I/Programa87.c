#include <stdio.h>

struct Nodo {
	int dato;
	struct Nodo* izquierdo;
	struct Nodo* derecho;
};

struct Nodo* nuevoNodo(int valor) {
	struct Nodo* nodo = (struct Nodo*) malloc(sizeof(struct Nodo));
	nodo->dato = valor;
	nodo->izquierdo = NULL;
	nodo->derecho = NULL;
	return nodo;
}

struct Nodo* insertar(struct Nodo* raiz, int valor) {
	if (raiz == NULL) {
		return nuevoNodo(valor);
	}
	
	if (valor < raiz->dato) {
		raiz->izquierdo = insertar(raiz->izquierdo, valor);
	} else {
		raiz->derecho = insertar(raiz->derecho, valor);
	}
	
	return raiz;
}

void inorden(struct Nodo* raiz) {
	if (raiz != NULL) {
		inorden(raiz->izquierdo);
		printf("%d ", raiz->dato);
		inorden(raiz->derecho);
	}
}

int main() {
	struct Nodo* raiz = NULL;
	
	raiz = insertar(raiz, 10);
	insertar(raiz, 5);
	insertar(raiz, 15);
	insertar(raiz, 3);
	insertar(raiz, 7);
	
	printf("\nRecorrido inorden del arbol: ");
	inorden(raiz);
	
	return 0;
}

