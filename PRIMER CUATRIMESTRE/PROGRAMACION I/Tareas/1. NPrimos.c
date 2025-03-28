#include <stdio.h>

int main() {
    int n, i, j, contador;
    printf("Ingrese un numero para buscar todos los numeros primos hasta el numero ingresado: ");
    scanf("%d", &n);
    printf("Lista de numeros primos: ");
    for (i = 2, j = 2, contador = 0; i <= n; j++) {
        if (j < i && i % j == 0) {
            contador++;
        }
        if (j == i) {
            if (contador == 0) {
                printf("%d ", i);
            }
            i++;
            j = 1;
            contador = 0;
        }
    }
    return 0;
}





