// 1. Straight Merging (Ordenamiento externo directo)
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1 = fopen("datos.txt", "w");
    int arr[] = {7, 3, 1, 8, 4, 9, 2, 6};
    int n = 8;

    for (int i = 0; i < n; i++) {
        fprintf(f1, "%d ", arr[i]);
    }
    fclose(f1);

    int run_size = 1;
    while (run_size < n) {
        FILE *in = fopen("datos.txt", "r");
        FILE *out = fopen("temp.txt", "w");

        int buffer1[100];
        int buffer2[100];

        while (!feof(in)) {
            int i = 0, j = 0;
            while (i < run_size && fscanf(in, "%d", &buffer1[i]) == 1) {
                i++;
            }
            while (j < run_size && fscanf(in, "%d", &buffer2[j]) == 1) {
                j++;
            }

            int p = 0, q = 0;
            while (p < i && q < j) {
                if (buffer1[p] < buffer2[q]) {
                    fprintf(out, "%d ", buffer1[p]);
                    p++;
                } else {
                    fprintf(out, "%d ", buffer2[q]);
                    q++;
                }
            }
            while (p < i) {
                fprintf(out, "%d ", buffer1[p]);
                p++;
            }
            while (q < j) {
                fprintf(out, "%d ", buffer2[q]);
                q++;
            }
        }

        fclose(in);
        fclose(out);
        remove("datos.txt");
        rename("temp.txt", "datos.txt");
        run_size *= 2;
    }

    FILE *res = fopen("datos.txt", "r");
    int val;
    while (fscanf(res, "%d", &val) == 1) {
        printf("%d ", val);
    }
    fclose(res);
    return 0;
}
