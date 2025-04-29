//Arreglo ordenado sin elementos repetidos (usando búsqueda binaria para localizar)
#include <stdio.h>

int main() {
    int arreglo[100] = {5, 10, 15, 20, 25, 30};
    int tamano = 6, valor, inicio = 0, fin = tamano - 1, medio, i, pos = -1;

    printf("Ingrese el valor a eliminar: ");
    scanf("%d", &valor);

    // Búsqueda binaria
    while (inicio <= fin) {
        medio = (inicio + fin) / 2;
        if (arreglo[medio] == valor) {
            pos = medio;
            break;
        } else if (valor < arreglo[medio]) {
            fin = medio - 1;
        } else {
            inicio = medio + 1;
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
