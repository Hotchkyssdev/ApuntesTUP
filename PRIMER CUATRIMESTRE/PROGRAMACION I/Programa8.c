#include <stdio.h>

int main() {
	int a, b, c;
	printf("Ingrese los valores para realizar una resta: \n");
	printf("Ingrese el primer valor: \n");
	scanf("%d", &a);
	printf("Ingrese el segundo valor: \n");
	scanf("%d", &b);
	c = a - b;
	printf("El resultado de la resta es: %d", c);
	return 0;
}
