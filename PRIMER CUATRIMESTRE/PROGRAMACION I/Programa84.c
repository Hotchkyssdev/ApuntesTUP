#include <stdio.h>
#include <conio.h>
#include <string.h>
#define a "d:\\arch2.dat"

int main() {
	FILE *arch2;
	char nombre[100];
	int i, x;
	
	if ((arch2 = fopen(a, "r")) == NULL) {
		printf("No se pudo abrir el archivo.\n");
	}
	fread(&nombre, sizeof(nombre), 1, arch2);
	x = strlen(nombre);
	for (i = 0; i < x; i++) {
		if (nombre[i] == '.') {
			printf("\n");
		} else {
			printf("%c", nombre[i]);
		}
	}
	
	fclose(arch2);
	getch();
	return 0;
}

