/*
En una Granja existen N conejos, N1 blancos y N2 negros. Suponiendo que P1 es el precio 
de venta de los conejos blancos y P2 es el precio de venta de los conejos negros, imprima 
el monto total de la venta. Informe al final el color de los conejos que se más se vendieron.
*/

#include <stdio.h>

int main() {
    int n1, n2;
    float p1, p2, totalBlancos, totalNegros, total;
    printf("Ingrese la cantidad de conejos blancos: ");
    scanf("%d", &n1);
    printf("Ingrese el precio a la venta de los conejos blancos: ");
    scanf("%f", &p1);
    printf("Ingrese la cantidad de conejos negros: ");
    scanf("%d", &n2);
    printf("Ingrese el precio de venta de los conejos negros: ");
    scanf("%f", &p2);
    totalBlancos = n1 * p1;
    totalNegros = n2 * p2;
    total = totalBlancos + totalNegros;
    printf("Monto total de venta: %.2f\n", total);
    if (n1 > n2) {
        printf("Se vendieron mas conejos blancos.\n");
    } else if (n2 > n1) {
        printf("Se vendieron mas conejos negros\n");
    } else {
        printf("Se vendio la misma cantidad de conejos blancos y negros.\n");
    }
    return 0;
}


