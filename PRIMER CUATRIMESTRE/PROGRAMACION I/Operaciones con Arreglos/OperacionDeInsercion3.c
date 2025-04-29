//Arreglo desordenado sin elementos repetidos
#include <stdio.h>

int main() {
    int arreglo[100] = {9, 4, 7, 2, 10}; // desordenado
    int tamano = 5;
    int valor, i;

    printf("Ingrese el valor a insertar: ");
    scanf("%d", &valor);

    for (i = 0; i < tamano; i++) {
        if (arreglo[i] == valor) {
            printf("Valor duplicado. No se puede insertar.\n");
            return 0;
        }
    }

    arreglo[tamano] = valor;
    tamano++;

    printf("Arreglo actualizado: ");
    for (i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}

