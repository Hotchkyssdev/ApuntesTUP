/*
Hacer un algoritmo que imprima el nombre de un artículo, clave, precio original y su 
precio con descuento. El descuento lo hace en base a la clave, si la clave es 01 el 
descuento es del 10% y si la clave es 02 el descuento en del 20% (solo existen dos claves). 
*/

#include <stdio.h>

int main() {
    int clave;
    float precio;
    printf("Ingrese la clave del producto (01 o 02) y su precio: ");
    scanf("%d %f", &clave, &precio);
    if (clave == 1) {
        precio *= 0.9;
    } else if (clave == 2) {
        precio *= 0.8;
    }
    printf("Precio final: %.2f\n", precio);
}
