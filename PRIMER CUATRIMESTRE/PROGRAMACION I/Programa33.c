#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int carta, eleccion, puntos = 1;
	srand(time(NULL));
	printf("Bienvenido al juego de Poker Alta-Baja\n");
	printf("\nAdivine la carta:\n");
	do {
		carta = rand() % 13 + 1;
		printf("1. Baja (1-6)\n");
		printf("2. Alta (8-13)\n");
		printf("Elija (1 o 2)\n");
		scanf("%d", &eleccion);
		if (carta == 7) {
			printf("\nSalio el numero 7. Has perdido\n");
			break;
		}
		if ((eleccion == 1 && carta < 7) || (eleccion == 2 && carta > 7)) {
			printf("Acertaste la carta era ");
		} else {
			printf("Te equivocaste la carta era ");
		}
		switch (carta) {
			case 1:
				printf("A.\n");
				break;
			case 11:
				printf("J.\n");
				break;
			case 12:
				printf("Q.\n");
				break;
			case 13:
				printf("K.\n");
				break;
			default:
				printf("%d.\n", carta);
				break;
		}
		if (!((eleccion == 1 && carta < 7) || (eleccion == 2 && carta > 7))) {
			break;
		}
		puntos *= 2;
	} while (1);
	printf("Puntos obtenidos: %d\n", puntos);
	return 0;
}

