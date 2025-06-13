#include <stdio.h>
#include <string.h>
#define archivo "c:\\archivo1.txt"

int main() {
	FILE *archivo1;
	char texto[200];
	
	archivo1 = fopen(archivo,"w");
	if (archivo1 == NULL) {
		printf("No se pudo crear el archivo");
		return 1;
	} 
	printf("Ingrese el texto a guardar en el archivo:\n");
	fgets(texto, sizeof(texto), stdin);
	fputs(texto, archivo1);
	
	printf("\n");
	printf("Texto guardado exitosamente.\n");
	fclose(archivo1);
	return 0;
}

