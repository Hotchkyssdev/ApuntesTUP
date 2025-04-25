#include <stdio.h>

int main() {
	int limInf, limSup;
	char respuesta;
	printf("Ingrese el limite inferior: ");
	scanf("%d", &limInf);
	printf("Ingrese el limite superior: ");
	scanf("%d", &limSup);
	printf("Ingrese la tecla P para los pares (P) o (I) para los impares: ");
	scanf(" %c", &respuesta);
	if (respuesta == 'p' || respuesta == 'P' || respuesta == 'i' || respuesta == 'I') {
		if (respuesta == 'p' || respuesta == 'P') {
			for (limInf; limInf <= limSup; limInf++) {
				if (limInf % 2 == 0) {
					printf("%d ", limInf);
				}
			}
		} else {
			for (limInf; limInf <= limSup; limInf++) {
				if (limInf % 2 != 0) {
					printf("%d ", limInf);
				}
			}
		}
	} else {
		printf("Error: Ingreso una letra distinta.\n");
	}
	return 0;
}
