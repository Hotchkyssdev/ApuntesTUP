/*
Diseñar una solución que permita ingresar tres números enteros, e informe cuál es el 
mayor. 
*/

#include <stdio.h>

int main() {
    int a, b, c, mayor;
    printf("Ingrese tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        mayor = a;
    } else if (b >= a && b >= c) {
        mayor = b;
    } else {
        mayor = c;
    }
    printf("El mayor es: %d\n", mayor);
    return 0;
}
