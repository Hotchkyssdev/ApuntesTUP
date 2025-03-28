#include <stdio.h>

int main() {
	int a, b, rep, suma = 0, menor = 300, mayor = 0;
	float promedio;
	printf("Ingrese la cantidad de personas: ");
	scanf("%d", &a);
	for (rep = 0; rep < a; rep++) {
		printf("Ingrese la edad: ");
		scanf("%d", &b);
		if (b < 0) {
			printf("Error: debe ser mayor a 0\n");
			printf("Ingrese la nueva edad: ");
			scanf("%d", &b);
		} else if (b == 0) {
			break;
		} else {
			suma = suma + b;
			if (b > mayor) {
				mayor = b;
			} 
			if (b < menor) {
				menor = b;
			}
		}
	}
	if (rep > 0) {
		promedio = (suma/a);
		printf("El promedio es: %.2f\n", promedio);
		printf("La edad mas alta es: %d\n", mayor);
		printf("La edad mas baja es: %d\n", menor);
	}
	return 0;
}






