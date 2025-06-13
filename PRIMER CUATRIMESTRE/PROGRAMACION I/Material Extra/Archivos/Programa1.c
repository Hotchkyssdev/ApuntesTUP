#include <stdio.h>

int main() {
	FILE *archivo;
	int numero;
	
	printf("Ingrese un numero entero: ");
	scanf("%d", &numero);
	
	archivo = fopen("output/Programa1.txt", "w");
	if (archivo == NULL) {
		printf("No se pudo crear el archivo.\n");
		return 1;
	}
	
	fprintf(archivo, "%d", numero);
	fclose(archivo);
	
	archivo = fopen("output/Programa1.txt", "r");
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo.\n");
		return 1;
	}
	
	fscanf(archivo, "%d", &numero);
	printf("Numero leido del archivo: %d\n", numero);
	fclose(archivo);
	return 0;
}

