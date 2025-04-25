#include <stdio.h>

int main(int argc, char *argv[]) {
	float nota1, nota2, nota3;
	float ponderacion1, ponderacion2, ponderacion3;
	float notafinal1, notafinal2, notafinal3;
	float notafinal;
	char continuar;
	do {
		printf("Ingrese la nota 1: ");
		scanf("%f", &nota1);
		printf("\nIngrese la nota 2: ");
		scanf("%f", &nota2);
		printf("\nIngrese la nota 3: ");
		scanf("%f", &nota3);
		if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 && nota3 >= 0 && nota3 <= 10) {
			ponderacion1 = 0.25;
			ponderacion2 = 0.30;
			ponderacion3 = 0.45;
			notafinal1 = nota1 * ponderacion1;
			notafinal2 = nota2 * ponderacion2;
			notafinal3 = nota3 * ponderacion3;
			notafinal = notafinal1 + notafinal2 + notafinal3;
			printf("\nNota 1: %.2f\n", nota1);
			printf("Ponderacion 1: %.2f\n", notafinal1);
			printf("Nota 2: %.2f\n", nota2);
			printf("Ponderacion 2: %.2f\n", notafinal2);
			printf("Nota 3: %.2f\n", nota3);
			printf("Ponderacion 3: %.2f\n", notafinal3);
			printf("Nota FINAL: %.2f\n", notafinal);
			if (notafinal >= 6) {
				printf("Materia Aprobada\n");
			} else {
				printf("Materia Desaprobada\n");
			}
		} else {
			printf("Los valores ingresados son incorrectos.");
		}
		printf("\n¿Desea hacer otro calculo? (s/n): ");
		scanf(" %c", &continuar);
	} while (continuar == 's' || continuar == 'S');
	return 0;
}

