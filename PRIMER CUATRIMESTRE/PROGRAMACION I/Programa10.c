#include <stdio.h>

int main() {
	int A, B, C;
	printf("Ingrese el primer número: ");
	scanf("%d", &A);
	printf("Ingrese el segundo número: ");
	scanf("%d", &B);
	printf("Ingrese el tercer número: ");
	scanf("%d", &C);
	if (A > B) {
		if (B > C) {
			printf("A: %d B: %d C: %d", A, B, C);
		} else {
			if (A > C) {
				printf("A: %d C: %d B: %d", A, C, B);
			} else {
				printf("C: %d A: %d B: %d", C, A, B);
			}
		}
	} else {
		if (C > B) {
			printf("C: %d B: %d A: %d", C, B, A);
		} else {
			if (A > C) {
				printf("B: %d A: %d C: %d", B, A, C);
			} else {
				printf("B: %d C: %d A: %d", B, C, A);
			}
		}
	}
	return 0;
}


