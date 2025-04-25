#include <stdio.h>

int main() {
	int edad;
	int dolares = 10;
	printf("Ingrese la edad de la niña: ");
	scanf("%d", &edad);
	if (edad >= 12) {
		while (dolares <= 1000) {
			dolares = dolares * 2;
			edad++;
		}
		printf("La edad de la niña cuando excedio el tope de 1000 dolares es: %d\n", edad);
		printf("La cantidad de dolares que tiene es: %d\n", dolares);
	} else {
		printf("No tiene 12 años aún.\n");
	}
	return 0;
}
