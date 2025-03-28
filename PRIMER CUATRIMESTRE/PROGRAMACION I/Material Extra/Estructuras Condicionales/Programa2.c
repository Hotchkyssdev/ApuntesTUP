/*
En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $1000. 
Mostrar por pantalla cuál será la cantidad que pagará una persona por su compra. 
*/

#include <stdio.h>

int main() {
    float compra, total;
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);
    if (compra > 1000) {
        total = compra * 0.8;
    } else {
        total = compra;
    }
    printf("Total a pagar: %.2f\n", total);
    return 0;
}
