#include <stdio.h>

int main() {
	int i, contador = 0, suma = 0, a;
	printf("Ingrese cuantos numeros va a sumar: ");
	scanf("%d", &i);
	while (contador < i) {
		printf("Ingrese un valor: ");
		scanf("%d", &a);
		suma = suma + a;
		contador = contador + 1;
	}
	printf("El resultado de la suma es: %d\n", suma);
	return 0;
}


