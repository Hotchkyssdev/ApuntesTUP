/*
Leer dos números y encontrar: 
a. La suma del doble del primero más el cuadrado del segundo.  
b. El promedio de sus cubos.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2;
    printf("Ingrese dos numeros: ");
    scanf("%f %f", &n1, &n2);
    printf("a) Suma: %.2f\n", (2 * n1) + pow(n2, 2));
    printf("b) Promedio de cubos: %.2f\n", (pow(n1, 3) + pow(n2, 3)) / 2);
    return 0;
}
