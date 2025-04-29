//Arreglo desordenado con elementos repetidos
#include <stdio.h>

int main() {
    int arreglo[100] = {7, 3, 7, 9, 5, 7, 2};
    int tamano = 7, valor, i, j;

    printf("Ingrese el valor a eliminar: ");
    scanf("%d", &valor);

    for (i = 0; i < tamano; ) {
        if (arreglo[i] == valor) {
            for (j = i; j < tamano - 1; j++) {
                arreglo[j] = arreglo[j + 1];
            }
            tamano--;
        } else {
            i++;
        }
    }

    printf("Arreglo actualizado: ");
    for (i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}
