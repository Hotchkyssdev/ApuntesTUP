#include <stdio.h>

int esPrimo(int n) {
	int i;
	
	if (n < 2) {
		return 0;
	}
	for (i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int contarPrimos(int Arreglo[], int Primos[], int *cantidadPrimos) {
	int i;
	*cantidadPrimos = 0;
	for (i = 0; i < 10; i++) {
		if(esPrimo(Arreglo[i])) {
			Primos[*cantidadPrimos] = Arreglo[i];
			(*cantidadPrimos)++;
		}
	}
}

int main() {
	int Arreglo[10];
	int Primos[10];
	int cantidadPrimos;
	int i;
	
	printf("Ingrese 10 números en el arreglo: \n");
	for (i = 0; i < 10; i++) {
		printf("Valor [%d]: ", i);
		scanf("%d", &Arreglo[i]);
	}
	
	contarPrimos(Arreglo, Primos, &cantidadPrimos);
	
	printf("\nCantidad de números primos: %d\n", cantidadPrimos);
	if (cantidadPrimos > 0) {
		printf("\nNumeros primos encontrado: ");
		for (i = 0; i < cantidadPrimos; i++) {
			printf("%d ", Primos[i]);
		}
		printf("\n");
	}
	
	return 0;
}
