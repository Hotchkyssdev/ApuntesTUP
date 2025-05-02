#include <stdio.h>

int main() {
    int Arreglo[10] = {2,1,2,5,4,3,7,7,6,8};
    int i, j, n, temp;
    int eliminados;
    int nuevoindice = 0;
    int posicion;
    n = sizeof(Arreglo) / sizeof(Arreglo[0]);

    printf("Arreglo Original.\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", Arreglo[i]);
    }
    
    printf("\nOrdenando el arreglo de mayor a menor.\n");
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (Arreglo[j] < Arreglo[j + 1]) {
                temp = Arreglo[j];
                Arreglo[j] = Arreglo[j + 1];
                Arreglo[j + 1] = temp;
            }
        }
    }
    
    printf("Arreglo Ordenado.\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", Arreglo[i]);
    }

    printf("\nEliminar los elementos repetidos.\n");
    for (i = 0; i < n; i++) {
        if (i == 0 || Arreglo[i] != Arreglo[i - 1]) {
            Arreglo[nuevoindice] = Arreglo[i];
            nuevoindice++;
        }
    }
    eliminados = n - nuevoindice;
    printf("\nArreglo sin duplicados: \n");
    for (i = 0; i < nuevoindice; i++) {
        printf("%d ", Arreglo[i]);
    }
    printf("\nCantidad de elementos eliminados: %d\n", eliminados);

    printf("Ingrese una posicion del arreglo: ");
    scanf("%d", &posicion);
    if (posicion >= 0 && posicion < nuevoindice) {
        Arreglo[posicion] = Arreglo[posicion] * 2;
        printf("Valor duplicado en la posicion %d.\n", posicion);
    } else {
        printf("Posicion invalida.\n");
    }

    printf("Arreglo Final:\n");
    for (i = 0; i < nuevoindice; i++) {
        printf("%d ", Arreglo[i]);
    }

    return 0;
}