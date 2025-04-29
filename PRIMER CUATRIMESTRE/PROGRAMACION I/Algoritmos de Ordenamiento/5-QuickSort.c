//5. QuickSort sin funciones
#include <stdio.h>

int main() {
    int a[] = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    int n = 10;

    int stack[100], top = -1;
    stack[++top] = 0;
    stack[++top] = n - 1;

    while (top >= 0) {
        int high = stack[top--];
        int low = stack[top--];

        int i = low, j = high, pivot = a[(low + high) / 2];

        while (i <= j) {
            while (a[i] < pivot) i++;
            while (a[j] > pivot) j--;
            if (i <= j) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
                i++; j--;
            }
        }

        if (low < j) { stack[++top] = low; stack[++top] = j; }
        if (i < high) { stack[++top] = i; stack[++top] = high; }
    }

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}