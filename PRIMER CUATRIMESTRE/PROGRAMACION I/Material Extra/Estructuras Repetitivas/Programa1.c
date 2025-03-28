/*
En un experimento se obtuvieron un conjunto de pares de valores (S, V) y se requiere que 
desarrolle un algoritmo que determine e imprima: 
a. En cuántos pares el primer valor S es mayor que el segundo V 
b. En cuantos pares (S, V) se cumple que S es el doble de V 
Nota: Tener en cuenta que el proceso finaliza cuando el usuario ingresa 0 en los dos 
valores del conjunto.
*/

#include <stdio.h>

int main() {
    int S,V, contador1 = 0, contador2 = 0;
    while (1) {
        printf("Ingrese S y V (0 0 para salir): ");
        scanf("%d %d", &S, &V);
        if (S == 0 && V == 0) {
            break;
        }
        if (S > V) {
            contador1++;
        }
        if (S == 2 * V) {
            contador2++;
        }
    }
    printf("S > V en  %d pares.\n", contador1);
    printf("S es el doble de V en %d pares.\n", contador2);
    return 0;
}

