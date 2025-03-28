#include <stdio.h>

int main() {
	int multiplicando = 1, contador = 1, producto, suma = 0;
	while (multiplicando <= 10) {
		while (contador <= 10) {
			producto = multiplicando * contador;
			suma = suma + producto;
			printf("%d \t", producto);
			contador++;
		}
		printf(" = %d\n", suma);
		suma = 0;
		multiplicando++;
		contador = 1;
	}
	return 0;
}



