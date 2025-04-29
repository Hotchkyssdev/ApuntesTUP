//2. Natural Merging Sort (Simulado con arreglos)
//Detecta secuencias ordenadas ("runs") y las fusiona.
#include <stdio.h>

int main() {
    int arr[] = {3, 5, 8, 1, 4, 9, 2, 6, 7}; // contiene runs naturales
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[100];
    int sorted = 0;

    while (!sorted) {
        int i = 0;
        int k = 0;
        sorted = 1;

        while (i < n) {
            int start1 = i;
            while (i < n - 1 && arr[i] <= arr[i + 1]) i++;
            int end1 = i++;

            int start2 = i;
            while (i < n - 1 && arr[i] <= arr[i + 1]) i++;
            int end2 = (i < n) ? i : n - 1;

            int j = start1, l = start2;
            while (j <= end1 && l <= end2) {
                if (arr[j] <= arr[l]) temp[k++] = arr[j++];
                else temp[k++] = arr[l++];
            }
            while (j <= end1) temp[k++] = arr[j++];
            while (l <= end2) temp[k++] = arr[l++];

            if (start2 < n) sorted = 0;
        }

        for (i = 0; i < n; i++) arr[i] = temp[i];
    }

    printf("Ordenado:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}