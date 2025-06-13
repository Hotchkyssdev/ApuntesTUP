#include <stdio.h>
#include <string.h>

int main() {
	FILE *archivo;
	char opcion;
	char nombre[50];
	char continuar;
	int edad;
	
	printf("Desea guardar o leer personas? (g/l): ");
	scanf(" %c", &opcion);
	
	if (opcion == 'g') {
		archivo = fopen("output/Programa5.txt", "a");
		if (archivo == NULL) {
			printf("No se pudo abrir el archivo para escribir.\n");
			return 1;
		}
		
		do {
			printf("\nNombre: ");
			fflush(stdin);
			fgets(nombre, sizeof(nombre), stdin);
			nombre[strcspn(nombre, "\n")] = 0;
			printf("Edad: ");
			scanf("%d", &edad);
			fprintf(archivo, "%s\n%d\n", nombre, edad);
			printf("Desea ingresar otra persona? (s/n): ");
			scanf(" %c", &continuar);
		} while (continuar == 's' || continuar == 'S');
		
		fclose(archivo);
	} else if (opcion == 'l') {
		archivo = fopen("output/Programa5.txt", "r");
		if (archivo == NULL) {
			printf("No se pudo abrir el archivo para leer.\n");
			return 1;
		}
		
		printf("\nListado de Personas:\n");
		while(fgets(nombre, sizeof(nombre), archivo)) {
			nombre[strcspn(nombre, "\n")] = 0;
			fscanf(archivo, "%d\n", &edad);
			printf("%s - %d anios\n", nombre, edad);
		}
		
		fclose(archivo);
	} else {
		printf("Opcion invalida.\n");
	}
	return 0;
}

