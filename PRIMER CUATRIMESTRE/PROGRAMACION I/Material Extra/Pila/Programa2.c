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

int pop(struct Nodo** pila) {
    struct Nodo* temp = *pila;
    int valor;
    if (*pila == NULL) {
        printf("La pila esta vacia.\n");
        return -1;
    }
    valor = temp->dato;
    *pila = temp->siguiente;
    free(temp);
    return valor;
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
    int valor, eliminado;
    int i;
    for (i = 0; i < 3; i++) {
        printf("Ingrese un valor para apilar: ");
        scanf("%d", &valor);
        push(&pila, valor);
    }

    mostrar(pila);
    printf("Eliminando el elemento en la cima de la pila...\n");
    eliminado = pop(&pila);
    if (eliminado != -1) {
        printf("Se elimino: %d\n", eliminado);
    }
    mostrar(pila);
    free(pila);
    return 0;
}
