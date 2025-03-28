/*
Leer tres números enteros de un Digito y almacenarlos en una sola variable que contenga 
a esos tres dígitos Por ejemplo si A=5 y B=6 y C=2 entonces X=562.
*/

#include <stdio.h>

int main() {
    int a, b, c , x;
    printf("Ingrese tres digitos: ");
    scanf("%d %d %d", &a, &b, &c);
    x = a * 100 + b * 10 + c;
    printf("Numero formado: %d\n", x);
    return 0;
}
