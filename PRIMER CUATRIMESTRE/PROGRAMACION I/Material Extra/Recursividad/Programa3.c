#include <stdio.h>

int invertirnumero(int n, int invertido) {
	if (n == 0) {
		return invertido;
	} else {
		return invertirnumero(n / 10, invertido * 10 + n % 10);
	}
}

int reversa(int n) {
	return invertirnumero(n, 0);
}

int main() {
	int numero;
	numero = 1234;
	printf("Numero %d en reversa: %d\ns", numero, reversa(numero));
	return 0;
}

