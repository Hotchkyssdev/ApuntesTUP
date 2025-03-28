#include <stdio.h>

int main() {
	int A, B, C;
    char letra = 'S';
    while (letra == 'S' || letra == 's') {
        printf("Ingrese el primer numero: ");
        scanf("%d", &A);
        printf("Ingrese el segundo numero: ");
        scanf("%d", &B);
        printf("Ingrese el tercer numero: ");
        scanf("%d", &C);
        if (A == B || A == C || B == C) {
            printf("Error: No puede haber numeros iguales.\n");
        } else {
            if (A > B && A > C) {
                printf("A es el mayor: %d\n", A);
            } else {
                if (B > A && B > C) {
                    printf("B es el mayor: %d\n", B);
                } else {
                    printf("C es el mayor: %d\n", C);
                }
            }
        }
        printf("Desea repetir otra comparacion? (S/N): ");
        scanf(" %c", &letra);
    }
    printf("Programa finalizado.\n");
	return 0;
}

