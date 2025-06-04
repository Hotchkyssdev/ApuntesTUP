#include <stdio.h>

void binario(int n) {
	if (n == 0) {
		return;
	}
	binario(n / 2);
	printf("%d", n % 2);
}

int main() {
	int num;
	printf("Ingrese un numero entero positivo: ");
	scanf("%d", &num);
	printf("Binario: ");
	if (num == 0) {
		printf("0");
	} else {
		binario(num);
	}
	printf("\n");
	return 0;
}

