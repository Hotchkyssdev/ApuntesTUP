/*
3) Indicar la posición del número buscado
Implementar un programa donde el usuario ingrese un número a buscar en un arreglo ordenado de 20 números. 
Mostrar la posición si lo encuentra, o un mensaje si no está.
*/

#include <stdio.h>

int main() {
    int arreglo[20];
    int i, j, temp, numBuscado, posicion = -1;

    printf("Ingrese 20 numeros:\n");
    for (i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    for (i = 0; i < 20 - 1; i++) {
        for (j = 0; j < 20 - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &numBuscado);

    for (i = 0; i < 20; i++) {
        if (arreglo[i] == numBuscado) {
            posicion = i;
            break;
        }
    }

    if (posicion != -1) {
        printf("El numero %d se encuentra en la posicion %d\n", numBuscado, posicion);
    } else {
        printf("El numero %d no se encuentra en el arreglo\n", numBuscado);
    }

    return 0;
}
