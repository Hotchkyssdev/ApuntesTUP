#include <stdio.h>

int main() {
	char c; 
	float x; 
	int i;
	printf("Ingrese un caracter: \n");
	c = getchar();
	printf("Ingrese un valor flotante: \n");
	scanf("%f", &x);
	printf("Ingrese un valor entero: \n");
	scanf("%d", &i);
	printf("Mostrar los valores ingresados: \n");
	putchar(c);
	printf("%3d%7.4f", i, x);
	return 0;
}
