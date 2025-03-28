/*
 Una compañía de seguros está abriendo un depto. de finanzas y estableció un programa 
para captar clientes, que consiste en lo siguiente: Si el monto por el que se efectúa la 
fianza es menor que $50 000 la cuota a pagar será por el 3% del monto, y si el monto es 
mayor que $50 000 la cuota a pagar será el 2% del monto. La compañía desea determinar 
cuál será la cuota que debe pagar un cliente.
*/

#include <stdio.h>

int main() {
    float monto;
    printf("Ingrese el monto de la fianza: ");
    scanf("%f", &monto);
    if (monto < 50000) {
        printf("Cuota a pagar: %.2f\n", monto * 0.03);
    } else {
        printf("Cuota a pagar: %.2f\n", monto * 0.02);
    }
    return 0;
}
