#include <stdio.h>

int main() {
	int i, n, limiteinf, limitesup;
	printf("Ingrese un n�mero para hacer su tabla de multiplicar: ");
	scanf("%d", &n);
	printf("Ingrese en que n�mero empezar la tabla de multiplicar: ");
	scanf("%d", &limiteinf);
	printf("Ingrese hasta que n�mero multiplicar: ");
	scanf("%d", &limitesup);
	for (i = limiteinf; i <= limitesup; i++) {
		printf("%d x %d = %d\n", n, i, n * i);
	}
	return 0;
}

