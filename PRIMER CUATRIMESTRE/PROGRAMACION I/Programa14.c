#include <stdio.h>

int main() {
	int a;
	printf("Ingrese un numero: ");
	scanf("%d", &a);
	if (a % 2 == 0) {
		a = a + 1;
		printf("Ahora es impar: %d\n", a);
	} else {
		printf("El numero %d ya es impar.\n", a);
	}
	return 0;
}




