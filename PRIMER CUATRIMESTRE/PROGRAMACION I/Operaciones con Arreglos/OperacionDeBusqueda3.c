//Arreglo ORDENADO SIN elementos repetidos (Búsqueda binaria)

#include <stdio.h>

int main() {
    int arreglo[] = {3, 7, 12, 18, 21, 30};
    int tamano = sizeof(arreglo)/sizeof(arreglo[0]);
    int valor, inicio = 0, fin = tamano - 1, medio;
    int encontrado = 0;

    printf("Ingrese el valor a buscar: ");
    scanf("%d", &valor);

    while (inicio <= fin) {
        medio = (inicio + fin) / 2;

        if (arreglo[medio] == valor) {
            printf("Valor encontrado en la posicion %d.\n", medio);
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