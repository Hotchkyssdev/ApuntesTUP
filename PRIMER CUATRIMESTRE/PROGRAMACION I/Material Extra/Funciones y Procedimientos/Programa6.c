/*
6) Operaciones básicas
Crear un programa que realiza las 3 operaciones básicas(suma, resta y multiplicación) 
al ingresar dos números y la operación a realizar. 
*/

#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    char operacion;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese la operación (+, -, *): ");
    scanf(" %c", &operacion);  

    switch (operacion) {
        case '+':
            printf("Resultado: %d\n", suma(num1, num2));
            break;
        case '-':
            printf("Resultado: %d\n", resta(num1, num2));
            break;
        case '*':
            printf("Resultado: %d\n", multiplicacion(num1, num2));
            break;
        default:
            printf("Operación inválida.\n");
    }

    return 0;
}

