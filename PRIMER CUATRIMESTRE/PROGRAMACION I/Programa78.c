#include <stdio.h>

int mcm(int a, int b, int m) {
	if (m % a == 0 && m % b == 0) {
		return m;
	}
	return mcm(a, b, m + 1);
}

int main() {
	int a, b, mayor;
	printf("Ingrese el primer numero: ");
	scanf("%d", &a);
	printf("\nIngrese el segundo numero: ");
	scanf("%d", &b);
	if (a > b) {
		mayor = a;
	} else {
		mayor = b;
	}
	printf("El MCM de %d y %d es: %d\n", a, b, mcm(a, b, mayor));
	return 0;
}

