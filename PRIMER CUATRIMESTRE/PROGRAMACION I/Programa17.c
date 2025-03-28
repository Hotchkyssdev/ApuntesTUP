#include <stdio.h>

int main() {
	int costoEntrada, cantidad, contadorA = 0, contadorB = 0, contadorC = 0, contadorD = 0, contadorE = 0, resultado, total = 0;
	char letra, respuesta;
	printf("***********************************\n");
	printf("* BIENVENIDO AL ESTADIO CUSCATLAN *\n");
	printf("***********************************\n");
	printf("* Sectores del estadio            *\n");
	printf("*   A- Sol general                *\n");
	printf("*   B- Sol preferente             *\n");
	printf("*   C- Sombra                     *\n");
	printf("*   D- Tribuna                    *\n");
	printf("*   E- Platea                     *\n");
	printf("***********************************\n");
	do {
		printf("Selecciona la letra del sector del estadio: ");
		scanf(" %c", &letra);
		switch (letra) {
			case 'A':
				costoEntrada = 3;
				printf("El costo de la entrada es: $%d\n", costoEntrada);
				printf("¿Cuantas entradas quiere comprar?\n");
				scanf("%d", &cantidad);
				resultado = costoEntrada * cantidad;
				contadorA = contadorA + cantidad;
				total = total + resultado;
				break;
			case 'B':
				costoEntrada = 5;
				printf("El costo de la entrada es: $%d\n", costoEntrada);
				printf("¿Cuantas entradas quiere comprar?\n");
				scanf("%d", &cantidad);
				resultado = costoEntrada * cantidad;
				contadorB = contadorB + cantidad;
				total = total + resultado;
				break;
			case 'C':
				costoEntrada = 8;
				printf("El costo de la entrada es: $%d\n", costoEntrada);
				printf("¿Cuantas entradas quiere comprar?\n");
				scanf("%d", &cantidad);
				resultado = costoEntrada * cantidad;
				contadorC = contadorC + cantidad;
				total = total + resultado;
				break;
			case 'D':
				costoEntrada = 15;
				printf("El costo de la entrada es: $%d\n", costoEntrada);
				printf("¿Cuantas entradas quiere comprar?\n");
				scanf("%d", &cantidad);
				resultado = costoEntrada * cantidad;
				contadorD = contadorD + cantidad;
				total = total + resultado;
				break;
			case 'E':
				costoEntrada = 20;
				printf("El costo de la entrada es: $%d\n", costoEntrada);
				printf("¿Cuantas entradas quiere comprar?\n");
				scanf("%d", &cantidad);
				resultado = costoEntrada * cantidad;
				contadorE = contadorE + cantidad;
				total = total + resultado;
				break;
			default:
				printf("Error: Selecciono un sector que no existe.\n");
		}
		printf("¿Desea comprar mas entradas de otro sector?: (S/N)\n");
		scanf(" %c", &respuesta);
	} while (respuesta == 'S' || respuesta == 's');
	printf("***********************************\n");
	printf("El costo total es: $%d\n", total);
	printf("Entradas del sector A compradas: %d\n", contadorA);
	printf("Entradas del sector B compradas: %d\n", contadorB);
	printf("Entradas del sector C compradas: %d\n", contadorC);
	printf("Entradas del sector D compradas: %d\n", contadorD);
	printf("Entradas del sector E compradas: %d\n", contadorE);
	return 0;
}















