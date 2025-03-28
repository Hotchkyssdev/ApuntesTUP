#include <stdio.h>
#include <conio.h>

int main() {
	char c[10];
	printf("Ingrese su nombre por teclado:");
	printf("\n");
	gets(c);
	printf("El nombre ingresado es: ");
	puts(c);
	printf("Mi nombre es: %s", c);
	return 0;
}
