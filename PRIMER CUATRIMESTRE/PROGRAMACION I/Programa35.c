#include <stdio.h>

int main() {
	int Arreglo[7];
	int Cont = 0, Acum = 0, contPar = 0, contImpar = 0;
	float promedio;
	while (Cont < 7) {
		printf("Ingrese un valor entero multiplo de 3: ");
		scanf("%d", &Arreglo[Cont]);
		if (Arreglo[Cont] % 3 != 0) {
			printf("Error: Debe ser multiplo de 3.\n");
			continue;
		}
		Cont++;
	}
	for (Cont = 0; Cont < 7; Cont++) {
		printf("Elemento %d: %d\n", Cont, Arreglo[Cont]);
		Acum = Acum + Arreglo[Cont];
		if (Arreglo[Cont] % 2 == 0) {
			contPar++;
		} else {
			contImpar++;
		}
	}
	promedio = (float) Acum / 7;
	printf("La suma de los elementos del arreglo es: %d\n", Acum);
	printf("Promedio de los elementos del arreglo es: %.2f\n", promedio);
	printf("Cantidad de Pares en el arreglo: %d\n", contPar);
	printf("Cantidad de Impares en el arreglo: %d\n", contImpar);
	return 0;
}
