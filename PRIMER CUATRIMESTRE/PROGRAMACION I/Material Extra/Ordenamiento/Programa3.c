/*
3) Ordenar por Selección
Agarrar 10 números y ordénalos de mayor a menor usando el algoritmo de selección.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, temp;
    int arreglo[10];

    printf("Arreglo Original:\n");
    for (i = 0; i < 10; i++) {
        arreglo[i] = rand() % 100;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", arreglo[i]);
    }

    printf("\nArreglo Ordenado:\n");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arreglo[i] < arreglo[j]) {
                temp = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    return 0;
}
