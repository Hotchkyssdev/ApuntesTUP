/*
Dados los lados de un triángulo, informar qué tipo es: isósceles, escaleno o equilátero.
*/

#include <stdio.h>

int main() {
    int lado1, lado2, lado3;
    printf("Ingrese los tres lados del triangulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    if (lado1 == lado2 && lado2 == lado3) {
        printf("Es un triangulo equilatero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Es un triangulo isosceles\n");
    } else {
        printf("Es un triangulo escaleno\n");
    }
    return 0;
}
