#include <stdio.h>

int main() {
	int i, n, limiteinf, limitesup;
	printf("Ingrese un número para hacer su tabla de multiplicar: ");
	scanf("%d", &n);
	printf("Ingrese en que número empezar la tabla de multiplicar: ");
	scanf("%d", &limiteinf);
	printf("Ingrese hasta que número multiplicar: ");
	scanf("%d", &limitesup);
	for (i = limiteinf; i <= limitesup; i++) {
		printf("%d x %d = %d\n", n, i, n * i);
	}
	return 0;
}

