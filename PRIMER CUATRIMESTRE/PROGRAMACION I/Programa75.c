#include <stdio.h>

int fibonacci(int n) {
	if (n <= 0) {
		printf("La posicion debe ser mayor a 0\n");
		return 0;
	} else if (n == 1) {
		return 0;
	} else if (n == 2) {
		return 1;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n;
	int i;
	printf("Ingrese el numero de terminos: ");
	scanf("%d", &n);
	
	printf("Serie de Fibonacci: \n");
	for (i = 1; i <= n; i++) {
		printf("%d ", fibonacci(i));
	}
	
	printf("\nEl resultado de la sucesion de Fibonacci es: %d\n", fibonacci(n));
	return 0;
}

