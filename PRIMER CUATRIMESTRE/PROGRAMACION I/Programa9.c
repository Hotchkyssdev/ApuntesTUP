#include <stdio.h>

int main() {
	int n1, n2, resultado;
	printf("Ingrese el primer n�mero: ");
	scanf("%d", &n1);
	printf("Ingrese el segundo n�mero: ");
	scanf("%d", &n2);
	resultado = n1 - n2;
	if (resultado < 0) {
		printf("El resultado de la resta es %d por lo tanto es un n�mero negativo.", resultado);
	} else if (resultado == 0) {
		printf("El resultado de la resta es %d por lo tanto es 0.", resultado);
	} else {
		printf("El resultado de la resta es %d por lo tanto es un n�mero positivo.", resultado);
	}
	return 0;
}
