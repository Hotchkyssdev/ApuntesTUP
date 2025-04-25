#include <stdio.h>

int main() {
	int opcion, i;
	int cantAlumnos, aprobados, desaprobados, regulares, promocionados;
	int legajo, nota;
	char continuar;
	char nombre[30];
	char apellido[30];
	do {
		printf("Menu de notas:\n");
		printf("1. Matematica\n");
		printf("2. Programacion\n");
		printf("3. Arquitectura y SO\n");
		printf("4. Organizacion Empresarial\n");
		printf("5. Ingles\n");
		printf("Seleccione una opcion: ");
		scanf("%d", &opcion);
		printf("\nMateria Seleccionada: ");
		switch (opcion) {
			case 1:
				printf("Matematica\n");
				break;
			case 2:
				printf("Programacion\n");
				break;
			case 3:
				printf("Arquitectura y SO\n");
				break;
			case 4:
				printf("Organizacion Empresarial\n");
				break;
			case 5:
				printf("Ingles\n");
				break;
			default:
				printf("Opcion invalida.\n");
				continue;
		}
		printf("Ingrese la cantidad de alumnos: ");
		scanf("%d", &cantAlumnos);
		aprobados = 0;
		desaprobados = 0;
		regulares = 0;
		promocionados = 0;
		for (i = 0; i < cantAlumnos; i++) {
			printf("Ingrese el legajo: ");
			scanf("%d", &legajo);
			printf("Ingrese el apellido: ");
			scanf("%s", &apellido);
			printf("Ingrese el nombre: ");
			scanf("%s", &nombre);
			printf("Ingrese la nota: ");
			scanf("%d", &nota);
			printf("\n%d\t%s\t%s\t%d\n", legajo, apellido, nombre, nota);
			if (nota >= 6) {
				aprobados++;
				if (nota >= 8) {
					promocionados++;
				} else {
					regulares++;
				}
			} else {
				desaprobados++;
			}
		}
		printf("\nResumen: \n");
		printf("Cantidad de aprobados: %d\n", aprobados);
		printf("Cantidad de desaprobados: %d\n", desaprobados);
		printf("Cantidad de regulares: %d\n", regulares);
		printf("Cantidad de promocionados: %d\n", promocionados);
		printf("\n¿Desea ingresar datos de otra materia? (s/n): ");
		scanf(" %c", &continuar);
	} while (continuar == 's' || continuar == 'S');
	return 0;
}
