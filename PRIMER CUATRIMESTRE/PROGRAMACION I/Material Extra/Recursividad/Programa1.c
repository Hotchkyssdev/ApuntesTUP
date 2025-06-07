#include <stdio.h>

int suma(int n) {
	if (n == 1) {
		return 1;
	} else {
		return n + suma(n - 1);
	}
}

int main() {
	int numero;
	numero = 5;
	printf("Suma de 1 a %d: %d\n", numero, suma(numero));
	return 0;
}

