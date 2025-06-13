#include <stdio.h>
#include <conio.h>
#include <string.h>
#define a "c:\\arch2.dat"

int main() {
	FILE *arch2;
	char nombre[100];
	int i, x;
	
	arch2 = fopen(a,"w");
	if (arch2 == NULL) {
		printf("No se pudo abrir el archivo");
		return 1;
	} 
	printf("Ingrese 5 nombres separados por puntos\n");
	scanf("%s", &nombre);
	fwrite(&nombre, sizeof(nombre), 1, arch2);
	fclose(arch2);
	
	arch2 = fopen(a, "r");
	if (arch2 == NULL) {
		printf("No se pudo abrir el archivo.\n");
		return 1;
	} 
	
	fread(&nombre, sizeof(nombre), 1, arch2);
	x = strlen(nombre);
	printf("\nNombres Separados\n");
	for (i = 0; i < x; i++) {
		if (nombre[i] == '.') {
			printf("\n");
		} else {
			printf("%c", nombre[i]);
		}
	}
	
	fclose(arch2);
	printf("\n");
	getch();
	return 0;
}

