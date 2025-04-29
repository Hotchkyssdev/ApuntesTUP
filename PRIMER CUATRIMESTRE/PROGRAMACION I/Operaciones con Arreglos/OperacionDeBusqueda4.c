//Arreglo ORDENADO CON elementos repetidos (Buscar todas las ocurrencias con búsqueda binaria modificada)

#include <stdio.h>

int main() {
    int arreglo[] = {3, 7, 12, 12, 12, 18, 21, 30};
    int tamano = sizeof(arreglo)/sizeof(arreglo[0]);
    int valor, inicio = 0, fin = tamano - 1, medio;
    int i, encontrado = 0;

    printf("Ingrese el valor a buscar: ");
    scanf("%d", &valor);

    while (inicio <= fin) {
        medio = (inicio + fin) / 2;

        if (arreglo[medio] == valor) {
            // Buscar ocurrencias hacia la izquierda
            for (i = medio; i >= 0 && arreglo[i] == valor; i--)
                printf("Valor encontrado en la posicion %d.\n", i);
            // Buscar ocurrencias hacia la derecha
            for (i = medio + 1; i < tamano && arreglo[i] == valor; i++)
                printf("Valor encontrado en la posicion %d.\n", i);
            encontrado = 1;
            break;
        } else if (arreglo[medio] < valor) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    if (!encontrado) {
        printf("Valor no encontrado.\n");
    }

    return 0;
}