//6. MergeSort sin funciones
#include <stdio.h>

int main() {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    int temp[100];

    for (int size = 1; size < n; size *= 2) {
        for (int left_start = 0; left_start < n - 1; left_start += 2 * size) {
            int mid = left_start + size - 1;
            int right_end = (left_start + 2 * size - 1 < n - 1) ? (left_start + 2 * size - 1) : (n - 1);
            if (mid >= n) continue;

            int i = left_start, j = mid + 1, k = 0;
            while (i <= mid && j <= right_end) {
                if (a[i] < a[j]) temp[k++] = a[i++];
                else temp[k++] = a[j++];
            }
            while (i <= mid) temp[k++] = a[i++];
            while (j <= right_end) temp[k++] = a[j++];

            for (i = left_start, k = 0; i <= right_end; i++, k++)
                a[i] = temp[k];
        }
    }

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}