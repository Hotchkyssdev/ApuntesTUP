/*
4)Buscar múltiples números
El usuario ingresa 10 números ordenados y luego ingresa 3 números diferentes a buscar. 
El programa debe aplicar búsqueda binaria para cada uno y mostrar si se encuentran.
*/

#include <stdio.h>

int main() {
    int numeros[10];
    int i, numBuscado;
    int encontrado;
    int busquedas[3];
    int j;
    int temp, inicio, fin, medio;

    printf("Ingrese 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("Ingrese 3 numeros a buscar:\n");
    for (i = 0; i < 3; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &busquedas[i]);
    }

    for (i = 0; i < 3; i++) {
        numBuscado = busquedas[i];
        inicio = 0;
        fin = 9;
        encontrado = 0;

        while (inicio <= fin) {
            medio = (inicio + fin) / 2;

            if (numeros[medio] == numBuscado) {
                encontrado = 1;
                break;
            } else if (numeros[medio] < numBuscado) {
                inicio = medio + 1;
            } else {
                fin = medio - 1;
            }
        }
        if (encontrado) {
            printf("El numero %d se encuentra en la lista.\n", numBuscado);
        } else {
            printf("El numero %d no se encuentra en la lista.\n", numBuscado);
        }
    }

    return 0;
}