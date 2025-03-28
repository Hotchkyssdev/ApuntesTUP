#include <stdio.h>

int main() {
	int c = 0;
	float valor = 0;
	float perimetro;
	while (c < 3 && valor <= 0) {
		printf("Ingrese el valor: ");
		scanf("%f", &valor);
		c = c + 1;
	}
	if (valor > 0) {
		perimetro = valor * 4;
		printf("El perimetro es: %.2f\n", perimetro);
	} else {
		printf("Se quedo sin intentos.");
	}
	return 0;
}



