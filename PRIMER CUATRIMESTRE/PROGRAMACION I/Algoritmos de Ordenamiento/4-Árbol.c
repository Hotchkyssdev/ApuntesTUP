//4. Árbol (Tree Sort simplificado usando arreglo simulado)
//Este no puede hacerse "realmente" sin estructuras si usamos árbol binario, 
//pero podemos simular ordenamiento por inserciones y luego recorrido in-order (como Insertion Sort).
#include <stdio.h>

int main() {
    int a[] = {5, 1, 10, 0, 4, 3};
    int n = 6;

    // Orden tipo InsertionSort (simulando recorrido in-order)
    for (int i = 1; i < n; i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}

