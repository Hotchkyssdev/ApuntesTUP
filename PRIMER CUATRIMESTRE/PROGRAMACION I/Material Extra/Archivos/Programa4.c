#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	FILE *archivo;
	char linea[200];
	int palabras = 0;
	int enPalabra = 0;
	int i;
	
	archivo = fopen("output/Programa4.txt", "r");
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo.\n");
		return 1;
	}
	
	while (fgets(linea, sizeof(linea), archivo)) {
		for (i = 0; linea[i] != '\0'; i++) {
			if (!isspace(linea[i]) && enPalabra == 0) {
				palabras++;
				enPalabra = 1;
			} else if (isspace(linea[i])) {
				enPalabra = 0;
			}
		}
	}
	
	fclose(archivo);
	printf("Cantidad total de palabras: %d\n", palabras);
	return 0;
}

