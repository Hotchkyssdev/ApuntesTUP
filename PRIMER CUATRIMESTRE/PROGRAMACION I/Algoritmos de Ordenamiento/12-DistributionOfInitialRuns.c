//5. Distribución de Runs Iniciales
//Distribuye "runs" en dos archivos de forma alternada.
#include <stdio.h>

int main() {
    int arr[] = {2, 5, 6, 1, 3, 7, 4, 8}; // contiene runs naturales
    int n = sizeof(arr) / sizeof(arr[0]);
    int fileA[100], fileB[100];
    int a = 0, b = 0, i = 0;
    int turn = 0;

    while (i < n) {
        if (turn == 0) {
            fileA[a++] = arr[i++];
            while (i < n && arr[i - 1] <= arr[i]) fileA[a++] = arr[i++];
            turn = 1;
        } else {
            fileB[b++] = arr[i++];
            while (i < n && arr[i - 1] <= arr[i]) fileB[b++] = arr[i++];
            turn = 0;
        }
    }

    printf("Archivo A: ");
    for (i = 0; i < a; i++) printf("%d ", fileA[i]);
    printf("\nArchivo B: ");
    for (i = 0; i < b; i++) printf("%d ", fileB[i]);
    return 0;
}