#include <stdio.h>
#include <conio.h>

int main() {
	int horas;
	float preciohora, salario;
	char nombre[15];
	printf("Ingrese su nombre: ");
	scanf("%s", &nombre);
	printf("Ingrese la cantidad de horas trabajadas: ");
	scanf("%d", &horas);
	printf("Ingrese el precio por hora: ");
	scanf("%f", &preciohora);
	if (horas <= 40) {
		salario = horas * preciohora;
	} else {
		salario = 40 * preciohora + 1.5 * preciohora * (horas - 40);
	}
	printf("Su nombre es: %s\n", nombre);
	printf("El salario es: %.2f\n", salario);
	return 0;
}








