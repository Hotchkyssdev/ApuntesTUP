/*
Se pide representar el algoritmo que nos calcule la suma de los N primeros números 
impares. Es decir, si ingresamos un 5, nos haga la suma de 1+3+5+7+9.
*/

#include <stdio.h>

int main() {
    int N, suma = 0, num = 1;
    printf("Ingrese N: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        suma += num;
        num += 2;
    }
    printf("Suma de los primeros %d impares: %d\n", N, suma);
    return 0;
}


