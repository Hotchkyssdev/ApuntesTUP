/*
3) Verificar si un número es par
Escriba una función llamada esPar que reciba un número entero y devuelva 1 si es par o 0 si es impar. 
Mostrar el resultado en el main.
*/

#include <stdio.h>

int esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (esPar(numero)) {
        printf("El numero %d es par.\n", numero);
    } else {
        printf("El numero %d es impar.\n", numero);
    }

    return 0;
}
