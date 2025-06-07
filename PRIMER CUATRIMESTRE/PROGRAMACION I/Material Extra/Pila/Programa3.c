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
    int opcion, valor;

    do {
        printf("\nMenu:\n");
        printf("1. Apilar\n");
        printf("2. Desapilar\n");
        printf("3. Ver cima de la pila\n");
        printf("4. Mostrar pila\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese un valor a apilar: ");
                scanf("%d", &valor);
                push(&pila, valor);
                break;
            case 2:
                valor = pop(&pila);
                if (valor != -1) {
                    printf("Se desapilo: %d\n", valor);
                }
                break;
            case 3:
                if (pila != NULL) {
                    printf("Cima de la pila: %d\n", pila->dato);
                } else {
                    printf("La pila esta vacia.\n");
                }
                break;
            case 4:
                mostrar(pila);
                break;
            case 5:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 5);

    free(pila);
    return 0;
} 

