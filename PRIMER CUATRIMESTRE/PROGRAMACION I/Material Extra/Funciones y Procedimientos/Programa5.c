/*
5) Calcular la potencia de un número
Escriba una función potencia que reciba dos enteros base y exponente, y 
devuelva base elevado a la exponente (sin usar pow()).
*/

#include <stdio.h>

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, exponente;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    if (exponente < 0) {
        printf("Este programa solo acepta exponentes enteros no negativos.\n");
    } else {
        int resultado = potencia(base, exponente);
        printf("%d elevado a la %d es %d\n", base, exponente, resultado);
    }

    return 0;
}