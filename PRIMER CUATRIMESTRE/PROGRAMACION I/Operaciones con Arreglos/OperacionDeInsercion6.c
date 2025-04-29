//Inserción al final (ordenada automáticamente)

#include <stdio.h>

int main() {
    int arreglo[100] = {5, 10, 15, 20, 25};
    int tamano = 5;
    int valor, i, pos = tamano;

    printf("Ingrese el valor a insertar: ");
    scanf("%d", &valor);

    // Buscar posición correcta para mantener el orden
    for (i = 0; i < tamano; i++) {
        if (valor < arreglo[i]) {
            pos = i;
            break;
        }
    }

    // Desplazar e insertar
    for (i = tamano; i > pos; i--) {
        arreglo[i] = arreglo[i - 1];
    }

    arreglo[pos] = valor;
    tamano++;

    printf("Arreglo ordenado: ");
    for (i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}