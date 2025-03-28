#include <stdio.h>

int main() {
	int i, n, contador = 0;
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			contador++;
		}
	}
	if (contador == 0) {
		printf("El numero %d es primo.\n", n);
	} else {
		printf("El numero %d NO es primo.\n", n);
	}
	return 0;
}


