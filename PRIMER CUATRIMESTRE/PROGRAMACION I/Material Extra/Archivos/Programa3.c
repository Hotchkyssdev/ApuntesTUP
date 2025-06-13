#include <stdio.h>

int main() {
	FILE *archivo;
	int numero;
	int i;
	
	printf("Ingrese un numero entre 1 y 10: ");
	scanf("%d", &numero);
	
	if (numero < 1 || numero > 10) {
		printf("Numero fuera de rango.\n");
		return 1;
	}
	
	archivo = fopen("output/Programa3.txt", "w");
	if (archivo == NULL) {
		printf("No se pudo crear el archivo.\n");
		return 1;
	}
	
	for (i = 1; i <= 10; i++) {
		fprintf(archivo, "%d x %d = %d\n", numero, i, numero * i);
	}
	
	fclose(archivo);
	printf("Tabla de multiplicar guardada en Programa3.txt\n");
	return 0;
}

