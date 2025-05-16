/*
2) Números aleatorios
Generar 10 números aleatorios entre 1 y 100, 
guardarlos en un array y ordenarlos usando el algoritmo de inserción. Mostrarlos antes y después.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, temp;
    int arreglo[10];

    for (i = 0; i < 10; i++) {
        arreglo[i] = rand() % 100 + 1;
    }

    printf("Arreglo original:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    for (i = 1; i < 10; i++) {
        temp = arreglo[i];
        j = i - 1;

        while (j >= 0 && arreglo[j] > temp) {
            arreglo[j + 1] = arreglo[j];
            j--;
        }

        arreglo[j + 1] = temp;
    }

    printf("Arreglo ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    return 0;
}
