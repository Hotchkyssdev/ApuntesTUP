//Arreglo ordenado con elementos repetidos
#include <stdio.h>

int main() {
    int arreglo[100] = {5, 10, 10, 15, 20, 20, 25};
    int tamano = 7, valor, i, j;

    printf("Ingrese el valor a eliminar: ");
    scanf("%d", &valor);

    for (i = 0; i < tamano; ) {
        if (arreglo[i] == valor) {
            // Desplazar todos los elementos hacia la izquierda
            for (j = i; j < tamano - 1; j++) {
                arreglo[j] = arreglo[j + 1];
            }
            tamano--; // Disminuye tamano
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