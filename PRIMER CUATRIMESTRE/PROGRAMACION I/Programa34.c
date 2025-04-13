#include <stdio.h>

int main() {
	int Arreglo[7];
	int Cont, Acum, contPar = 0, contImpar = 0;
	for (Cont = 0; Cont < 7; Cont++) {
		printf("Ingrese un valor: ");
		scanf("%d", &Arreglo[Cont]);
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
	printf("Suma total de los numeros del arreglo: %d\n", Acum);
	printf("Numeros pares del arreglo: %d\n", contPar);
	printf("Numeros impares del arreglo: %d\n", contImpar);
	return 0;
}
