/*1) Calcular el maximo comun divisor usando una funcion recursiva*/

#include <stdio.h>

int mcd(int a, int b) {
    if (b == 0)
        return a;
    return mcd(b, a % b);
}

int main() {
    int num1, num2;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Ambos numeros deben ser positivos.\n");
        return 1;
    }

    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd(num1, num2));

    return 0;
}
