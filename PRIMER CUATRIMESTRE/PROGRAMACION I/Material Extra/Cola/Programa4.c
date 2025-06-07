#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct Persona {
    char nombre[50];
};

struct Nodo {
    struct Persona persona;
    struct Nodo* siguiente;
};

void encolar(struct Nodo** frente, struct Nodo** final, char* nombre) {
    struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    if (nuevo == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }
    strcpy(nuevo->persona.nombre, nombre);
    nuevo->persona.nombre[MAX - 1] = '\0';
    nuevo->siguiente = NULL;
    if (*final == NULL) {
        *frente = *final = nuevo;
    } else {
        (*final)->siguiente = nuevo;
        *final = nuevo;
    }
    printf("Se encolo: %s\n", nombre);
}

char* desencolar(struct Nodo** frente, struct Nodo** final) {
    struct Nodo* temp = *frente;
    char* valor;
    if (*frente == NULL) {
        printf("La cola esta vacia, no se puede desencolar.\n");
        return NULL;
    }
    valor = temp->persona.nombre;
    *frente = (*frente)->siguiente;
    if (*frente == NULL) {
        *final = NULL;
    }
    return valor;
}

void mostrar(struct Nodo* frente) {
    printf("\nContenido de la cola:\n");
    while (frente != NULL) {
        printf("%s -> ", frente->persona.nombre);
        frente = frente->siguiente;
    }
    printf("NULL\n");
}

char* verFrente(struct Nodo* frente) {
    if (frente == NULL) {
        printf("La cola esta vacia, no hay frente.\n");
        return NULL;
    }
    return frente->persona.nombre;
}

int main() {
    struct Nodo* frente = NULL;
    struct Nodo* final = NULL;
    char nombre[50];
    int opcion;
    char* atendido;
    char* frenteNombre;

    do {
        printf("\nMenu:\n");
        printf("1. Encolar persona\n");
        printf("2. Desencolar persona\n");
        printf("3. Mostrar cola\n");
        printf("4. Ver frente de la cola\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el nombre de la persona: ");
                scanf("%s", nombre);
                encolar(&frente, &final, nombre);
                break;
            case 2:
                atendido = desencolar(&frente, &final);
                if (atendido != NULL) {
                    printf("Se atendio a: %s\n", atendido);
                }
                break;
            case 3:
                mostrar(frente);
                break;
            case 4:
                frenteNombre = verFrente(frente);
                if (frenteNombre != NULL) {
                    printf("Frente de la cola: %s\n", frenteNombre);
                } else {
                    printf("No hay personas en la cola.\n");
                }
                break;
            case 5:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion invalida, por favor intente de nuevo.\n");
                break;
        }
    } while (opcion != 5);
    free(frente);
    free(final);
    return 0;
}
