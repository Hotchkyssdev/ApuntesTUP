/*
2) Eliminar de la cola (dequeue)
Agregar una función que elimine el primer elemento de la cola (dequeue) y luego mostrar los elementos restantes.
*/

#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

void encolar(struct Nodo** frente, struct Nodo** final, int dato) {
    struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    if (*final == NULL) {
        *frente = *final = nuevo;
    } else {
        (*final)->siguiente = nuevo;
        *final = nuevo;
    }
    printf("Se encolo: %d\n", dato);
}

int desencolar(struct Nodo** frente, struct Nodo** final) {
    struct Nodo* temp = *frente;
    int valor;
    if (*frente == NULL) {
        printf("La cola esta vacia, no se puede desencolar.\n");
        return -1;
    }
    valor = temp->dato;
    *frente = (*frente)->siguiente;
    if (*frente == NULL) {
        *final = NULL;
    }
    free(temp);
    return valor;
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
    struct Nodo* final = NULL;
    int i, valor;
    for (i = 0; i < 3; i++) {
        printf("Ingrese un valor para encolar: ");
        scanf("%d", &valor);
        encolar(&frente, &final, valor);
    }

    mostrar(frente);
    printf("\nDesencolando el primer elemento...\n");
    desencolar(&frente, &final);
    mostrar(frente);

    return 0;
}
