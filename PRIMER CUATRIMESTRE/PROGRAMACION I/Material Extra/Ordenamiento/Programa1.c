/*
1) Ordenar 5 elementos usando burbuja
Crear un programa que ordene 5 números 
y use el algoritmo de burbuja para ordenarlos de menor a mayor. Mostrarlos antes y después de ordenar.
*/

#include <stdio.h>

int main() {
    int i, j, temp;
    int arreglo[5];

    printf("Ingrese 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    
    printf("Arreglo antes de ordenar:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arreglo[i]);
    }

    printf("\n");

    
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }

    printf("Arreglo ordenado:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    return 0;
}
