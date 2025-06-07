#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

void push(struct Nodo** pila, int valor) {
    struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->siguiente = *pila;
    *pila = nuevo;
    printf("Se apilo: %d\n", valor);
}

void mostrar(struct Nodo* pila) {
    printf("Contenido de la pila:\n");
    while (pila != NULL) {
        printf("%d\n", pila->dato);
        pila = pila->siguiente;
    }
}

int main() {
    struct Nodo* pila = NULL;
    int valor;
    int i;
    for (i = 0; i < 3; i++) {
        printf("Ingrese un valor para apilar: ");
        scanf("%d", &valor);
        push(&pila, valor);
    }

    mostrar(pila);
    free(pila);
    return 0;
}
