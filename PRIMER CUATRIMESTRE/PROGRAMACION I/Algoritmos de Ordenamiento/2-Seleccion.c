//2. Selection Sort
#include <stdio.h>

int main() {
    int a[] = {64, 25, 12, 22, 11};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}