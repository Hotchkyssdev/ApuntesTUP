#include <stdio.h>
#include <conio.h>

int main() {
	int n1, n2, resultado;
	printf("Ingrese el primer número: \n");
	scanf("%d", &n1);
	printf("Ingrese el segundo número: \n");
	scanf("%d", &n2);
	resultado = n1 + n2;
	printf("El resultado de la suma de %d y %d es: %d\n", n1, n2, resultado);
	return 0;
}
