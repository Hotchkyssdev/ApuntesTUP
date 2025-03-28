/*
Escriba un algoritmo que permita ingresar un Número N positivo y muestre por pantalla la 
suma de sus dígitos.
*/

#include <stdio.h>

int main() {
    int N, suma = 0;
    printf("Ingrese un numero positivo: ");
    scanf("%d", &N);
    while (N > 0) {
        suma += N % 10;
        N /= 10;
    }
    printf("Suma de los digitos: %d\n", suma);
    return 0;
}

