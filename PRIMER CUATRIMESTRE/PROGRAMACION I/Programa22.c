#include <stdio.h>

int main() {
	int intentos = 3, contador;
	float lado, perimetro;
	char repetir = 's';
	while (repetir == 's' || repetir == 'S') {
		contador = 0;
		while (contador < intentos) {
			printf("Ingrese el valor del lado del cuadrado: ");
			scanf("%f", &lado);
			if (lado > 0) {
				perimetro = 4 * lado;
				printf("El perimetro del cuadrado es: %.2f\n", perimetro);
				break;
			} else {
				printf("Valor invalido. Intente de nuevo.\n");
			}
			contador++;
		}
		if (contador == intentos) {
			printf("Se agotaron los intentos sin ingresar un valor valido.\n");
		}
		printf("Desea realizar otro calculo? (S/N): ");
		scanf(" %c", &repetir);
	}
	printf("Programa finalizado.\n");
	return 0;
}



