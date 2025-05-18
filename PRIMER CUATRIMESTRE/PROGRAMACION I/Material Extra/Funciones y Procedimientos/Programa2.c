/*
2) Calcular el área de un triángulo
Cree una función llamada areaTriangulo que reciba la base y la altura de un triángulo y retorne el área. 
Muestre el resultado en el main.
*/

#include <stdio.h>

float areaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

int main() {
    float base, altura;

    printf("Ingrese la base del triangulo: ");
    scanf("%f", &base);

    printf("Ingrese la altura del triangulo: ");
    scanf("%f", &altura);

    float area = areaTriangulo(base, altura);
    printf("El area del triangulo es: %.2f\n", area);

    return 0;
}