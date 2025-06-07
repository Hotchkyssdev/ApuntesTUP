#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

void push(struct Nodo** pila, int valor) {
    struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->siguiente = *pila;
    *pila = nuevo;
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

void invertirPalabra(char* palabra) {
    struct Nodo* pila = NULL;
    int i;
    int longitud = strlen(palabra);
    for (i = 0; i < longitud; i++) {
        push(&pila, palabra[i]);
    }
    printf("Palabra inverida: ");
    for (i = 0; i < longitud; i++) {
        char letra = pop(&pila);
        if (letra != -1) {
            printf("%c", letra);
        }
    }
    printf("\n");
}

int main() {
    char palabra[MAX];
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    invertirPalabra(palabra);
    return 0;
}
