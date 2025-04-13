#include <stdio.h>

int main() {
	int i;
	int numeros[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,98,12};
	int size = sizeof(numeros) / sizeof(numeros[0]);
	printf("Arreglo Original: \n");
	for (i = 0; i < size; i++) {
		printf("Numeros[%d] = %d\n", i, numeros[i]);
	}
	for (i = 0; i < size; i++) {
		if (numeros[i] % 2 != 0) {
			numeros[i] *= 2;
		}
	}
	printf("Arreglo Modificado: \n");
	for (i = 0; i < size; i++) {
		printf("Numeros[%d] = %d\n", i, numeros[i]);
	}
	return 0;
}
