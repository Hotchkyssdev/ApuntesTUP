#include <stdio.h>

int main() {
	float peso, total = 0.0;
	float cargamaxima;
	printf("Ingrese la carga maxima de peso: ");
	scanf("%f", &cargamaxima);
	while (1) {
		printf("Ingrese la cantidad que pesco hasta el momento: ");
		scanf("%f", &peso);
		if (peso == 0.0) {
			printf("Programa finalizado. Total pescados: %.2f kg\n", total);
			break;
		}
		total += peso;
		printf("Total acumulado: %.2f kg\n", total);
		if (total > cargamaxima) {
			printf("Se ha superado la carga maxima de %.2f kg.\n", cargamaxima);
			break;
		}
	}
	return 0;
}
