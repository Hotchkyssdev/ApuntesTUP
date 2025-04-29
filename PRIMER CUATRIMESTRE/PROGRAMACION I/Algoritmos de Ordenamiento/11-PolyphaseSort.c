//4. Polyphase Sort (Ejemplo básico simulado)
//Este ejemplo es conceptual (usualmente requiere control de bloques y tamaños de runs).
#include <stdio.h>

int main() {
    int F1[] = {1, 4, 7};
    int F2[] = {2, 5};
    int n1 = 3, n2 = 2;
    int i = 0, j = 0, k = 0;
    int output[10];

    while (i < n1 || j < n2) {
        if (i < n1 && (j >= n2 || F1[i] <= F2[j])) {
            output[k++] = F1[i++];
        } else {
            output[k++] = F2[j++];
        }
    }

    printf("Polyphase Sort:\n");
    for (int x = 0; x < k; x++) {
        printf("%d ", output[x]);
    }
    return 0;
}
