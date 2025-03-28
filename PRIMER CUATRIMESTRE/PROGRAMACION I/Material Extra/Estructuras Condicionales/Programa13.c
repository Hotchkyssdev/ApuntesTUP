/*
Elabore una solución que solicite el ingreso de un número entero distinto de 0 y se 
informe si es par o no 
*/

#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un numero distinto de 0: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("El numero es par\n");
    } else {
        printf("El numero es impar\n");
    }
    return 0;
}

