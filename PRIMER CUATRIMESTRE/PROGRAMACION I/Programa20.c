#include <stdio.h>

int main() {
	int i, contador, suma, a, b = 0;
	while (b == 0) {
		printf("Ingrese cuantos numeros va a sumar: ");
		scanf("%d", &i);
		suma = 0;
		contador = 0;
		while (contador < i) {
			printf("Ingrese un valor: ");
			scanf("%d", &a);
			suma = suma + a;
			contador = contador + 1;
		}
		printf("El resultado de la suma es: %d\n", suma);
		printf("Ingrese 1 si quiere terminar el programa o 0 para continuar: ");
		scanf("%d", &b);
	}
	return 0;
}


