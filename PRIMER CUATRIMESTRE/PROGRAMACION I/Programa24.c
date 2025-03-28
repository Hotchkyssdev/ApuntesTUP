#include <stdio.h>

int main() {
	int P, Q;
	char letra;
	char repetir = 'S';
	while (repetir == 'S' || repetir == 's') {
		printf("***********************************\n");
		printf("*BIENVENIDO A LAS TABLAS DE VERDAD*\n");
		printf("***********************************\n");
		printf("* Operaciones                     *\n");
		printf("*   A- Conjuncion                 *\n");
		printf("*   B- Disyuncion                 *\n");
		printf("*   C- Implicacion                *\n");
		printf("***********************************\n");
		printf("Ingrese la letra de la operacion a realizar: ");
		scanf(" %c", &letra);
		printf("\nP | Q | Resultado\n");
        printf("-----------------\n");
		P = 1;
		while (P >= 0) {
			Q = 1;
			while (Q >= 0) {
				int resultado = 0;
				switch (letra) {
					case 'A':
						if (P == 1 && Q == 1) {
							resultado = 1;
						}
						break;
					case 'B':
						if (P == 1 || Q == 1) {
							resultado = 1;
						}
						break;
					case 'C':
						if (P == 0 || Q == 1) {
							resultado = 1;
						}
						break;	
					default:
						printf("Opcion invalida.\n");
						P = -1;
						Q = -1;
						break;
				}
				if (P == 1) {
					printf("V");
				} else {
					printf("F");
				}
				printf(" | ");
				if (Q == 1) {
					printf("V");
				} else {
					printf("F");
				}
				printf(" | ");
				if (resultado == 1) {
					printf("V\n");
				} else {
					printf("F\n");
				}
				Q--;
			}
			P--;
		}
		printf("Desea ver otra tabla de verdad? (S/N): ");
		scanf(" %c", &repetir);
	}
	printf("Programa finalizado.\n");
	return 0;
}







