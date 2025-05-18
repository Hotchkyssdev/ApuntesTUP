/*
2) Buscar en 10 elementos
El usuario ingresa 10 números ordenados 
en forma ascendente y luego un número a buscar. Usar búsqueda binaria para encontrarlo.
*/

#include <stdio.h>

int main() {
    int arreglo[10];
    int i, j, temp, num, inicio, fin, medio;
    int encontrado = 0;

    printf("Ingrese 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &num);

    inicio = 0;
    fin = 9;
    while (inicio <= fin) {
        medio = (inicio + fin) / 2;
        if (arreglo[medio] == num) {
            encontrado = 1;
            printf("El numero %d fue encontrado en la posicion %d.\n", num, medio);
            break;
        } else if (arreglo[medio] < num) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    if (!encontrado) {
        printf("El numero %d no fue encontrado en el arreglo.\n", num);
    }
    printf("\nFin del programa.\n");
    return 0;
}
