/*
Obtener un algoritmo que imprima por pantalla todos los números pares del 2 al 300.
*/

#include <stdio.h>

int main() {
    for (int i = 2; i <= 300; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
