#include <stdio.h>

int main() {
	int opcion;
	float A, B, resultado;
	printf("Ingrese el primer n�mero: ");
	scanf("%f", &A);
	printf("Ingrese el segundo n�mero: ");
	scanf("%f", &B);
	printf("Ingrese una opci�n: \n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicaci�n\n");
	printf("4. Divisi�n\n");
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
			printf("El resultado de la multiplicaci�n es: %.2f\n", resultado);
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
			printf("Opci�n inv�lida.\n");
	}
	return 0;
}


