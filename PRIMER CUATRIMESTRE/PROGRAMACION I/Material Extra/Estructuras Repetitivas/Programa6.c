/*
Dado un número ingresado por el usuario determinar si es primo o no. 
*/

#include <stdio.h>

int main() {
    int num, esPrimo = 1;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    if (num < 2) {
        esPrimo = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }
    printf("%d %s primo.\n", num, esPrimo ? "es" : "no es");
    return 0;
}


