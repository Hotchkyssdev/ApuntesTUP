/*
Generar un archivo binario cuyo campos son: DNI, Apellido, Nombre y Nota
Mostrar su contenido por pantalla
Ingresar por pantalla la cantidad de alumnos a cargar
*/

#include <stdio.h>
#include <stdlib.h>

struct Alumno {
	int dni;
	char nombre[30];
	char apellido[30];
	float nota;
};

void cargarAlumnos(FILE *archivo, int cantidad) {
	struct Alumno alumno;
	int i;
	
	for (i = 0; i < cantidad; i++) {
		printf("\nAlumno %d:\n", i+1);
		printf("DNI: ");
		scanf("%d", &alumno.dni);
		printf("Apellido: ");
		scanf("%s", alumno.apellido);
		printf("Nombre: ");
		scanf("%s", alumno.nombre);
		printf("Nota: ");
		scanf("%f", &alumno.nota);
		
		if (alumno.nota < 0 || alumno.nota > 10) {
			printf("Error: La nota ingresada no esta en el rango. Vuelva a ingresar todos los datos devuelta\n\n");
			i = i-1;
			continue;
		} 
		
		fwrite(&alumno, sizeof(struct Alumno), 1, archivo);
	}
}

void mostrarAlumnos(FILE *archivo) {
	struct Alumno alumno;
	int total = 0;
	float sumaNotas = 0;
	int aprobados = 0, desaprobados = 0;
	
	rewind(archivo);
	
	printf("\n            Listado de Alumnos\n");
	printf("------------------------------------------\n");
	printf("DNI \t Apellido \t Nombre \t Nota\n");
	while (fread(&alumno, sizeof(struct Alumno), 1, archivo) == 1) {
		printf("%d   %s   %s      %.2f\n", alumno.dni, alumno.apellido, alumno.nombre, alumno.nota);
		total++;
		sumaNotas += alumno.nota;
		if (alumno.nota >= 6) {
			aprobados++;
		} else {
			desaprobados++;
		}
	}
	printf("------------------------------------------\n");
	
	if (total > 0) {
		printf("Cantidad de Alumnos: %d\n", total);
		printf("Promedio Alumnos: %.2f\n", sumaNotas / total);
		printf("Cantidad de Alumnos Aprobados (Nota >= 6): %d\n", aprobados);
		printf("Cantidad de Alumnos Desaprobados: %d\n", desaprobados);
	} else {
		printf("\nNo hay alumnos en el archivo.\n");
	}
}

int main() {
	FILE* archivo;
	int cantidad;
	
	archivo = fopen("output/alumnos.txt", "wb+");
	if (archivo == NULL) {
		printf("No se pudo crear el archivo.\n");
		return 1;
	}
	
	printf("Ingrese la cantidad de alumnos a cargar: ");
	scanf("%d", &cantidad);
	
	cargarAlumnos(archivo, cantidad);
	mostrarAlumnos(archivo);
	
	fclose(archivo);
	return 0;
}

