#include <stdio.h>

int main() {
    int Arreglo[10];
    int Matriz[3][3];
    int k = 0;

    for (int i = 0; i < 10; i++) {
        printf("Ingrese el elemento %d del arreglo: ", i);
        scanf("%d", &Arreglo[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Matriz[i][j] = Arreglo[k];
            k++;
        }
    }

    printf("La Matriz 3 x 3 es:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }

    printf("Los elementos de la diagonal principal son:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", Matriz[i][i]);
    }
    printf("\n");

    return 0;
}
