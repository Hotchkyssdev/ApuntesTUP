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
			printf("Salio el numero 7. Has perdido\n");
			break;
		} else if ((eleccion == 1 && carta < 7) || (eleccion == 2 && carta > 7)) {
			printf("Acertaste la carta era %d\n", carta);
			puntos *= 2;
		} else {
			printf("Te equivocaste. La carta era %d. Perdiste\n", carta);
			break;
		}
	} while (1);
	printf("Puntos obtenidos: %d\n", puntos);
	return 0;
}

