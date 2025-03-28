#include <stdio.h>

int main() {
	int opcion;
	float A, B, resultado;
	printf("Ingrese el primer número: ");
	scanf("%f", &A);
	printf("Ingrese el segundo número: ");
	scanf("%f", &B);
	printf("Ingrese una opción: \n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicación\n");
	printf("4. División\n");
	scanf("%d", &opcion);
	switch (opcion) {
		case 1:
			resultado = A + B;
			printf("El resultado de la suma es: %.2f\n", resultado);
			break;
		case 2:
			resultado = A - B;
			printf("El resultado de la resta es: %.2f\n", resultado);
			break;
		case 3:
			resultado = A * B;
			printf("El resultado de la multiplicación es: %.2f\n", resultado);
			break;
		case 4:
			if (B != 0) {
				resultado = A / B;
				printf("El resultado de la division es: %.2f\n", resultado);
				break;
			} else {
				printf("Error: No se puede dividir por cero.\n");
				break;
			}
		default:
			printf("Opción inválida.\n");
	}
	return 0;
}


