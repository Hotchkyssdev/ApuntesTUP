/*
Dado una lista doblemente encadenada
A) Ingresar por teclado la cantidad de elementos que tendra la lista 
B) Cargar la lista y indicar si se pudo cargar la cantidad indicada
C) Mostrar la lista de adelante hacia atras y de atras hacia adelante

Ingresar un elemento por teclado, si es menor al primer elemento de la lista, insertarlo adelante, si es mayor que el ultimo elemento, insertarlo al final, en cualquier otro caso y imprimir un mensaje por pantalla

Mostrar el nuevo contenido de la lista en el sentido que corresponda con la insercion que se hizo
*/

#include <stdio.h>
#include <stdlib.h>

struct Nodo {
	int dato;
	struct Nodo* anterior;
	struct Nodo* siguiente;
};

struct Nodo* crearNodo(int dato) {
	struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
	if (nuevo != NULL) {
		nuevo->dato = dato;
		nuevo->anterior = NULL;
		nuevo->siguiente = NULL;
	}
	return nuevo;
}

void insertarFinal(struct Nodo** cabeza, struct Nodo** cola, int dato) {
	struct Nodo* nuevo = crearNodo(dato);
	if (*cabeza == NULL) {
		*cabeza = *cola = nuevo;
	} else {
		(*cola)->siguiente = nuevo;
		nuevo->anterior = *cola;
		*cola = nuevo;
	}
}

void mostrarDesdeCabeza(struct Nodo* cabeza) {
	printf("\nLista de adelante hacia atras:\n");
	while (cabeza != NULL) {
		printf("%d ", cabeza->dato);
		cabeza = cabeza->siguiente;
	}
	printf("\n");
}

void mostrarDesdeCola(struct Nodo* cola) {
	printf("\nLista de atras hacia adelante:\n");
	while (cola != NULL) {
		printf("%d ", cola->dato);
		cola = cola->anterior;
	}
	printf("\n");
}

void insertarCondicional(struct Nodo** cabeza, struct Nodo** cola, int nuevo) {
	if (*cabeza == NULL) {
		insertarFinal(cabeza, cola, nuevo);
		return;
	}
	if (nuevo < (*cabeza)->dato) {
		struct Nodo* nodo = crearNodo(nuevo);
		nodo->siguiente = *cabeza;
		(*cabeza)->anterior = nodo;
		*cabeza = nodo;
		printf("Insertado al inicio.\n");
	} else if (nuevo > (*cola)->dato) {
		insertarFinal(cabeza, cola, nuevo);
		printf("Insertado al final.\n");
	} else {
		printf("No se inserto: el valor no es ni menor al primero ni mayor al ultimo.\n");
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

int main() {
	struct Nodo* cabeza = NULL;
	struct Nodo* cola = NULL;
	int i, n, valor;
	
	printf("Ingrese la cantidad de elementos para la lista: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("Ingrese valor %d: ", i+1);
		scanf("%d", &valor);
		insertarFinal(&cabeza, &cola, valor);
	}
	
	mostrarDesdeCabeza(cabeza);
	mostrarDesdeCola(cola);
	
	printf("\nIngrese un nuevo elemento para la lista: ");
	scanf("%d", &valor);
	
	insertarCondicional(&cabeza, &cola, valor);
	
	if (valor < cabeza->dato) {
		mostrarDesdeCabeza(cabeza);
	} else if (valor > cola->dato) {
		mostrarDesdeCola(cola);
	}
	
	liberarLista(cabeza);
	return 0;
}

