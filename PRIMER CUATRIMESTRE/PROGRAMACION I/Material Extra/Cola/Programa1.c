#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

void encolar(struct Nodo** frente, struct Nodo** fin, int valor) {
    struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->siguiente = NULL;
    if (*fin == NULL) {
        *frente = *fin = nuevo;
    } else {
        (*fin)->siguiente = nuevo;
        *fin = nuevo;
    }
    printf("Se encolo: %d\n", valor);
}

void mostrar(struct Nodo* frente) {
    printf("\nContenido de la cola:\n");
    while (frente != NULL) {
        printf("%d -> ", frente->dato);
        frente = frente->siguiente;
    }
    printf("NULL\n");
}

int main() {
    struct Nodo* frente = NULL;
    struct Nodo* fin = NULL;
    int i, valor;
    for (i = 0; i < 3; i++) {
        printf("Ingrese un valor para encolar: ");
        scanf("%d", &valor);
        encolar(&frente, &fin, valor);
    }

    mostrar(frente);
    return 0;
}
