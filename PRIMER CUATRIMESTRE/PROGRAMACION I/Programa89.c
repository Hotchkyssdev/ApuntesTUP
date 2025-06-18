/*
Diseñar un programa que permita generar un archivo de texto, el cual debe contener los nombres de las materias de primer año de TUP mostrar el contenido del archivo, es decir los nombres en la misma linea y separado por 2 *
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARCHIVO "output/materias.txt"
#define MAX 10
#define TAM 100

int main() {
	FILE* archivo;
	char materias[MAX][TAM];
	int n, i;
	char linea[1000];
	
	printf("Ingrese la cantidad de materias de primer año: ");
	scanf("%d", &n);
	
	if (n <= 0 || n > MAX) {
		printf("Cantidad no valida.\n");
		return 1;
	}
	
	getchar();
	
	for (i = 0; i < n; i++) {
		printf("Materia %d: ", i+1);
		fgets(materias[i], TAM, stdin);
		materias[i][strcspn(materias[i], "\n")] = '\0';
	}
	
	archivo = fopen(ARCHIVO, "w");
	if (archivo == NULL) {
		printf("Error al crear el archivo.\n");
		return 1;
	}
	
	for (i = 0; i < n; i++) {
		fprintf(archivo, "%s", materias[i]);
		if (i < n - 1) {
			fprintf(archivo, "**");
		}
	}
	
	fclose(archivo);
	
	archivo = fopen(ARCHIVO, "r");
	if (archivo == NULL) {
		printf("Error al abrir el archivo.\n");
		return 1;
	}
	
	fgets(linea, sizeof(linea), archivo);
	printf("\nContenido del archivo:\n%s\n", linea);
	
	fclose(archivo);
	return 0;
}

