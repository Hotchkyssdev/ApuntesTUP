#include <stdio.h>
#include <string.h>

int main() {
	FILE *archivo;
	char nombre[100];
	char continuar;
	
	archivo = fopen("output/Programa2.txt", "w");
	if (archivo == NULL) {
		printf("No se pudo crear el archivo.\n");
		return 1;
	}
	
	do {
		printf("Ingrese un nombre: ");
		fflush(stdin);
		fgets(nombre, sizeof(nombre), stdin);
		nombre[strcspn(nombre, "\n")] = 0;
		fprintf(archivo, "%s\n", nombre);
		printf("Desea ingresar otro nombre? (s/n): ");
		scanf(" %c", &continuar);
	} while (continuar == 's' || continuar == 'S');
	
	fclose(archivo);
	
	archivo = fopen("output/Programa2.txt", "r");
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo.\n");
		return 1;
	}
	
	printf("\nNombres guardados: \n");
	while (fgets(nombre, sizeof(nombre), archivo) != NULL) {
		printf("%s", nombre);
	}
	fclose(archivo);
	return 0;
}

