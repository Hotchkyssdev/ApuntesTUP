//3. Balanced Multiway Merging (Simulado con 3 "archivos")
//Usamos 3 arreglos simulando tres archivos.
#include <stdio.h>

int main() {
    int input1[] = {1, 4, 7};
    int input2[] = {2, 5, 8};
    int input3[] = {3, 6, 9};
    int n1 = 3, n2 = 3, n3 = 3;
    int output[100];
    int i = 0, j = 0, k = 0, o = 0;

    while (i < n1 || j < n2 || k < n3) {
        int min = 1000;

        if (i < n1 && input1[i] < min) min = input1[i];
        if (j < n2 && input2[j] < min) min = input2[j];
        if (k < n3 && input3[k] < min) min = input3[k];

        if (i < n1 && input1[i] == min) output[o++] = input1[i++];
        else if (j < n2 && input2[j] == min) output[o++] = input2[j++];
        else if (k < n3 && input3[k] == min) output[o++] = input3[k++];
    }

    printf("Mezcla balanceada:\n");
    for (int x = 0; x < o; x++) printf("%d ", output[x]);
    return 0;
}