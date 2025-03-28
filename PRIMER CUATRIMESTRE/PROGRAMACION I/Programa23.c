#include <stdio.h>

int main() {
	int N, num, cont = 0, contPar = 0;
	printf("Ingrese la cantidad de numeros a ingresar: ");
	scanf("%d", &num);
	while (cont < num) {
		printf("Ingrese un numero: ");
		scanf("%d", &N);
		if (N % 2 == 0) {
			printf("El numero %d es par.\n", N);
			contPar++;
		}
		cont++;
	}
	printf("La cantidad de numeros pares es: %d", contPar);
	return 0;
}


