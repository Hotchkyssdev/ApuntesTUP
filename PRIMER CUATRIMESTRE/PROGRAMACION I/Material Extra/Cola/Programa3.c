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

int verFrente(struct Nodo* frente) {
    if (frente == NULL) {
        printf("La cola esta vacia, no hay frente.\n");
        return -1;
    }
    return frente->dato;
}

int main() {
    struct Nodo* frente = NULL;
    struct Nodo* final = NULL;
    int opcion, dato;

    do {
        printf("\nMenu:\n");
        printf("1. Encolar\n");
        printf("2. Desencolar\n");
        printf("3. Ver frente de la cola\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese un numero para encolar: ");
                scanf("%d", &dato);
                encolar(&frente, &final, dato);
                mostrar(frente);
                break;
            case 2:
                printf("Desencolando...\n");
                dato = desencolar(&frente, &final);
                if (dato != -1) {
                    printf("Se desencolo: %d\n", dato);
                }
                mostrar(frente);
                break;
            case 3:
                dato = verFrente(frente);
                if (dato != -1) {
                    printf("El frente de la cola es: %d\n", dato);
                }
                break;
            case 4:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion invalida, por favor intente de nuevo.\n");
                break;
        }   
    } while (opcion != 4);
}
