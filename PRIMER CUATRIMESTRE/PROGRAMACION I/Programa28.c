#include <stdio.h>

int main() {
	int n, i = 0;
	int resultado;
	printf("Ingrese un número: ");
	scanf("%d", &n);
	while (i <= 10) {
		resultado = n * i;
		printf("%d * %d = %d\n", n, i, resultado);
		i++;
	}
	return 0;
}



