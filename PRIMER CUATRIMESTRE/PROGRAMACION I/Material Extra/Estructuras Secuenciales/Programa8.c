/*
Elabore un programa que realice la conversión de cm. a pulgadas. 
a. Donde 1cm = 0.39737 pulgadas. 
*/

#include <stdio.h>

int main() {
    float cm;
    printf("Ingrese la cantidad de centimetros: ");
    scanf("%f", &cm);
    printf("Equivale a %.2f pulgadas.\n", cm * 0.39737);
    return 0;
}
