#include <stdio.h>

int digitos(int n) {
	if (n < 10) {
		return 1;
	} else {
		return 1 + digitos(n / 10);
	}
}

int main() {
	int numero;
	numero = 1234;
	printf("Cantidad de digitos de %d: %d\n", numero, digitos(numero));
	return 0;
}
