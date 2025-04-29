//Arreglo desordenado con elementos repetidos
#include <stdio.h>

int main() {
    int arreglo[100] = {9, 4, 7, 4, 10}; // puede tener repetidos
    int tamano = 5;
    int valor, i;

    printf("Ingrese el valor a insertar: ");
    scanf("%d", &valor);

    arreglo[tamano] = valor;
    tamano++;

    printf("Arreglo actualizado: ");
    for (i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}
