/*
Obtener un algoritmo que imprima por pantalla todos los números comprendidos entre el 
5 y el 230, pero en orden inverso. Por ejemplo: 230,229,228,……………….,6,5.
*/

#include <stdio.h>

int main() {
    for (int i = 230; i >= 5; i--) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}



