//Arreglo ordenado con elementos repetidos
#include <stdio.h>

int main() {
    int arreglo[100] = {3, 7, 12, 12, 18, 30};
    int tamano = 6;
    int valor, i, pos;

    printf("Ingrese el valor a insertar: ");
    scanf("%d", &valor);

    // Buscar posición para insertar
    for (pos = 0; pos < tamano && arreglo[pos] <= valor; pos++);

    // Desplazar
    for (i = tamano; i > pos; i--) {
        arreglo[i] = arreglo[i - 1];
    }

    arreglo[pos] = valor;
    tamano++;

    printf("Arreglo actualizado: ");
    for (i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}

