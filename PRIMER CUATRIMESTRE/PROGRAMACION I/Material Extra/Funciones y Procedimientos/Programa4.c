/*
4) Calcular el factorial de un número
Cree una función llamada factorial que calcule el factorial de un número entero positivo.
*/

#include <stdio.h>

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El numero debe ser positivo.\n");
    } else {
        int resultado = factorial(numero);
        printf("El factorial de %d es %d\n", numero, resultado);
    }

    return 0;
}
