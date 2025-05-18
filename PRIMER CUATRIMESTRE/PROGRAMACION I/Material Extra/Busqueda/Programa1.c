/*
1) Búsqueda binaria 
Crear un programa que permita ingresar un número a buscar 
dentro del siguiente arreglo ordenado: {2, 4, 6, 8, 10, 12}. 
Usar búsqueda binaria para verificar si el número está presente.
*/

#include <stdio.h>

int main() {
    int arreglo[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int numero, izquierda = 0, derecha = n - 1, medio;
    int encontrado = 0;
    printf("Ingrese un numero a buscar: ");
    scanf("%d", &numero);

    while (izquierda <= derecha) {
        medio = (izquierda + derecha) / 2;

        if (arreglo[medio] == numero) {
            encontrado = 1;
            break;
        } else if (arreglo[medio] < numero) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    if (encontrado) {
        printf("El numero %d se encuentra en el arreglo.\n", numero);
    } else {
        printf("El numero %d no se encuentra en el arreglo.\n", numero);
    }

    return 0;
}