/*2) Calcular los n primeros numeros naturales pares*/

#include <stdio.h>

void mostrarPares(int n, int actual) {
    if (n == 0) {
        return;
    }
    printf("%d ", actual);
    mostrarPares(n - 1, actual + 2);
}

int main() {
    int cantidad;

    printf("Ingrese la cantidad de numeros pares a mostrar: ");
    scanf("%d", &cantidad);

    if (cantidad <= 0) {
        printf("Debe ingresar un numero positivo.\n");
        return 1;
    }

    printf("Los primeros %d numeros pares son:\n", cantidad);
    mostrarPares(cantidad, 2);
    printf("\n");

    return 0;
}


