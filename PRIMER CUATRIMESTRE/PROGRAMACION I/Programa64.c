#include <stdio.h>
#include <conio.h>

int suma(int a, int b);
int resta(int a, int b);
void imprimir(int p);

int main() {
	int x,y,z,resultado;
	printf("Ingrese numero a sumar: ");
	scanf("%d", &x);
	printf("Ingrese numero a sumar: ");
	scanf("%d", &y);
	
	z = suma(x,y);
	printf("La suma es %d\n", z);
	printf("La suma es %d\n", suma(x,y));
	
	printf("\nIngrese numero a restar: ");
	scanf("%d", &x);
	printf("Ingrese numero a restar: ");
	scanf("%d", &y);
	
	resultado = resta(x,y);
	printf("La resta es %d\n", resultado);
	printf("La resta es %d\n", resta(x,y));
	
	printf("\n");
	imprimir(z);
	printf("\n");
	imprimir(resultado);
	printf("\n");
	
	getch();
	return 0;
}


int suma(int a, int b) {
	int total;
	total = a + b;
	return total;
}

int resta(int a, int b) {
	int total;
	total = a - b;
	return total;
}

void imprimir(int p) {
	printf("El resultado es: %d", p);
}

