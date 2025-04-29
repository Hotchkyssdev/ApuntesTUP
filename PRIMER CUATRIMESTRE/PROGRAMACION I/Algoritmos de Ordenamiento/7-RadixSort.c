//7. RadixSort sin funciones
#include <stdio.h>

int main() {
    int a[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = 8;

    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max) max = a[i];

    for (int exp = 1; max / exp > 0; exp *= 10) {
        int output[100], count[10] = {0};

        for (int i = 0; i < n; i++)
            count[(a[i] / exp) % 10]++;

        for (int i = 1; i < 10; i++)
            count[i] += count[i - 1];

        for (int i = n - 1; i >= 0; i--) {
            output[count[(a[i] / exp) % 10] - 1] = a[i];
            count[(a[i] / exp) % 10]--;
        }

        for (int i = 0; i < n; i++)
            a[i] = output[i];
    }

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}