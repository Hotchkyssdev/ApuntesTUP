//Arreglo desordenado CON elementos repetidos 
//(Búsqueda secuencial que muestra todas las coincidencias)

#include <stdio.h>

int main() {
    int arreglo[] = {12, 5, 9, 5, 18, 5};
    int tamano = sizeof(arreglo)/sizeof(arreglo[0]);
    int valor, i, encontrado = 0;

    printf("Ingrese el valor a buscar: ");
    scanf("%d", &valor);

    for (i = 0; i < tamano; i++) {
        if (arreglo[i] == valor) {
            printf("Valor encontrado en la posicion %d.\n", i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Valor no encontrado.\n");
    }

    return 0;
}
