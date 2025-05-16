/*
1) Buscando los números pares
Problema de hoy: Crear un programa que recorra un arreglo de enteros 
y al encontrar números impares, duplique su valor y muestre el nuevo arreglo con esos valores.  
Arreglo original: [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,98,12]
*/

#include <stdio.h>

int main() {
    int arreglo[20] =  {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,98,12};
    int i;
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Arreglo original: \n");
    for (i = 0; i < tam; i++) {
        printf("%d, ", arreglo[i]);
    }

    printf("\nArreglo modificado: \n");
    for (i = 0; i < tam; i++) {
        if (arreglo[i] % 2 != 0) {
            arreglo[i] *= 2;
        }
    }

    for (i = 0; i < tam; i++) {
        printf("%d, ", arreglo[i]);
    }
    return 0;
}