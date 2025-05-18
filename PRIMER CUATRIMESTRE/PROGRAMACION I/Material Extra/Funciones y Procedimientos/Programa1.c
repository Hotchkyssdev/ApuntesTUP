/*
1) Calcular el doble de un número
Escriba una función llamada doble que reciba un número entero y devuelva su doble. 
El programa principal debe pedir un número al usuario, llamar a la función y mostrar el resultado.
*/

#include <stdio.h>

int doble(int numero) {
    return numero * 2;
}

int main() {
    int num;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    int resultado = doble(num);
    printf("El doble de %d es %d\n", num, resultado);

    return 0;
}
