//Arreglo ordenado sin elementos repetidos
#include <stdio.h>

int main() {
    int arreglo[100] = {3, 7, 12, 18, 30}; // tamaño inicial 5
    int tamano = 5;
    int valor, i, pos;

    printf("Ingrese el valor a insertar: ");
    scanf("%d", &valor);

    // Verificar si ya existe
    for (i = 0; i < tamano; i++) {
        if (arreglo[i] == valor) {
            printf("El valor ya existe. No se puede insertar.\n");
            return 0;
        }
    }

    // Buscar posición para insertar
    for (pos = 0; pos < tamano && arreglo[pos] < valor; pos++);

    // Desplazar a la derecha
    for (i = tamano; i > pos; i--) {
        arreglo[i] = arreglo[i - 1];
    }

    arreglo[pos] = valor;
    tamano++;

    // Mostrar arreglo
    printf("Arreglo actualizado: ");
    for (i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}