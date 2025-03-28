/*
Leer 2 números; si son iguales que los multiplique, si el primero es mayor que el segundo 
que los reste y si no que los sume. 
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    if (a == b) {
        printf("Resultado: %d\n", a * b);
    } else if (a > b) {
        printf("Resultado: %d\n", a - b);
    } else {
        printf("Resultado: %d\n", a + b);
    }
    return 0;
}
