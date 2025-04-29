//Arreglo desordenado sin elementos repetidos
#include <stdio.h>

int main() {
    int arreglo[100] = {12, 7, 3, 9, 15, 5};
    int tamano = 6, valor, i, pos = -1;

    printf("Ingrese el valor a eliminar: ");
    scanf("%d", &valor);

    // Búsqueda secuencial
    for (i = 0; i < tamano; i++) {
        if (arreglo[i] == valor) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Elemento no encontrado.\n");
    } else {
        for (i = pos; i < tamano - 1; i++) {
            arreglo[i] = arreglo[i + 1];
        }
        tamano--;

        printf("Arreglo actualizado: ");
        for (i = 0; i < tamano; i++) {
            printf("%d ", arreglo[i]);
        }
    }

    return 0;
}