#include <stdio.h>

int main() {
	int n1 = 19;
	int n2 = 21;
	int resultado;
	const constante = 25;
	char b = 't';
	printf("Hoy es Mi�rcoles\n");
	printf("Es la segunda clase de Programaci�n I\n");
	printf("Valor de la variable: %d\n", n1);
	printf("Valor de la constante: %d\n", constante);
	printf("Valor del caracter: %c\n", b);
	printf("La suma de n1 y n2 es: %d + %d = %d\n", n1, n2, n1 + n2);
	resultado = n1 + n2;
	printf("El resultado de la suma es: %d\n", resultado);
	printf("La suma de n1 y n2 es: %d + %d = %d\n", n1, n2, resultado);
	return 0;
}