#include <stdio.h>

int main() {
	int Arreglo[7];
	int c = 0, d = 0, valor, e = 0;
	while (c < 7) {
		printf("Ingrese un valor: ");
		scanf("%d", &valor);
		if (valor % 3 == 0) {
			Arreglo[d] = valor;
			d++;
		}
		c++;
	}
	e = d;
	if (d == 0) {
		printf("El arreglo no tiene elementos.\n");
	} else {
		for (d = 0; d < e; d++) {
			printf("Elemento %d: %d\n", d, Arreglo[d]);
		}
	}
	return 0;
}
