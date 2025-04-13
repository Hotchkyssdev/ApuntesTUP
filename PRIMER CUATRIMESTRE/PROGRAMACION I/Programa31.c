#include <stdio.h>

int main() {
	int cant = 0, c = 1, estado;
	int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
	char electro[30];
	printf("Ingrese la cantidad de electrodomesticos a ingresar: ");
	scanf("%d", &cant);
	while (c <= cant) {
		printf("Ingrese el nombre del electrodomestico: ");
		scanf("%s", &electro);
		printf("Ingrese el estado del electodomestico: \n");
		printf("1. Averiado\n");
		printf("2. Sin Repuestos\n");
		printf("3. Desuso\n");
		printf("4. Funcionando\n");
		printf("Selecciona una opcion (1-4): ");
		scanf("%d", &estado);
		if (estado == 1) {
			cont1++;
		} else if (estado == 2) {
			cont2++;
		} else if (estado == 3) {
			cont3++;
		} else if (estado == 4) {
			cont4++;
		} else {
			printf("Estado invalido. Ingreselo nuevamente\n");
			continue;
		}
		printf("\nOrden\tElectrodomestico\tEstado\n");
		printf("%d\t%s\t\t\t%d\n", c, electro, estado);
		c += 1;
	}
	if (cant == 0) {
		printf("Error: No ingreso ningun electrodomestico.\n");
	}
	printf("----------------------------------------------\n");
	printf("Total de Electrodomesticos: %d\n", cant);
	printf("Total Estado 1 (Averiado): %d\n", cont1);
	printf("Total Estado 2 (Sin Repuestos): %d\n", cont2);
	printf("Total Estado 3 (Desuso): %d\n", cont3);
	printf("Total Estado 4 (Funcionando): %d\n", cont4);
	return 0;
}

