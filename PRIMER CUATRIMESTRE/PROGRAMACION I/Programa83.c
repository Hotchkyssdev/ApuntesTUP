#include <stdio.h>
#include <string.h>
#define a "d:\\arch2.dat"

int main() {
	FILE *arch2;
	char nombre[100];
	arch2 = fopen(a, "w");
	if (arch2 == NULL) {
		printf("No se pudo abrir el archivo");
	}
	printf("Ingrese 5 nombres separados por puntos\n");
	scanf("%s", &nombre);
	fwrite(&nombre, sizeof(nombre), 1, arch2);
	
	fclose(arch2);
	return 0;
}

