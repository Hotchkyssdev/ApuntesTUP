/*
Dados dos archivos se desea generar un tercer archivo que contiene la informacion de archivo 1 y archivo 2
archivo 3 tiene que estar ordenado por DNI
archivo 1 y archivo 2 ya tiene que estar ordenados por DNI
al final indicar los siguientes totales
cantidad total de registros de archivo 3
cantidad de registros que no fueron cargados en archivo 3 (por ejemplo dnis repetidos)
cantidad de registros de archivo 1
cantidad de registros de archivo 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alumno {
	int dni;
	char apellido[30];
	char nombre[30];
	float nota;
};

void crearArchivo(const char* nombreArchivo) {
	FILE* archivo = fopen(nombreArchivo, "wb");
	struct Alumno alumno;
	int n, i;
	
	if (archivo == NULL) {
		printf("No se pudo crear el archivo %s\n", nombreArchivo);
		return;
	}
	
	printf("Cantidad de alumnos para %s: ", nombreArchivo);
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("\nAlumno %d\n", i + 1);
		printf("DNI: ");
		scanf("%d", &alumno.dni);
		printf("Apellido: ");
		scanf("%s", alumno.apellido);
		printf("Nombre: ");
		scanf("%s", alumno.nombre);
		printf("Nota (0 a 10): ");
		scanf("%f", &alumno.nota);
		
		if (alumno.nota < 0 || alumno.nota > 10) {
			printf("Nota inválida. Intente de nuevo.\n");
			i--;
			continue;
		}
		
		fwrite(&alumno, sizeof(struct Alumno), 1, archivo);
	}
	
	fclose(archivo);
	printf("Archivo %s creado correctamente.\n", nombreArchivo);
}

int cargarArchivo(const char* nombreArchivo, struct Alumno alumnos[], int max) {
	FILE* archivo = fopen(nombreArchivo, "rb");
	int contador = 0;
	
	if (archivo == NULL) {
		printf("No se pudo abrir %s\n", nombreArchivo);
		return -1;
	}
	
	while (fread(&alumnos[contador], sizeof(struct Alumno), 1, archivo) == 1 && contador < max) {
		contador++;
	}
	
	fclose(archivo);
	return contador;
}

int compararDNI(const void* a, const void* b) {
	return ((struct Alumno*)a)->dni - ((struct Alumno*)b)->dni;
}

void mostrarArchivo(const char* nombreArchivo) {
	FILE* archivo = fopen(nombreArchivo, "rb");
	struct Alumno alumno;
	int total = 0, aprobados = 0, desaprobados = 0;
	float sumaNotas = 0;
	
	if (archivo == NULL) {
		printf("No se pudo abrir %s\n", nombreArchivo);
		return;
	}
	
	printf("\nContenido de %s:\n", nombreArchivo);
	printf("DNI\tApellido\tNombre\tNota\n");
	
	while (fread(&alumno, sizeof(struct Alumno), 1, archivo) == 1) {
		printf("%d\t%s\t\t%s\t%.2f\n", alumno.dni, alumno.apellido, alumno.nombre, alumno.nota);
		total++;
		sumaNotas += alumno.nota;
		if (alumno.nota >= 6) aprobados++;
		else desaprobados++;
	}
	
	fclose(archivo);
	
	if (total > 0) {
		printf("\nTotal de alumnos: %d\n", total);
		printf("Promedio de notas: %.2f\n", sumaNotas / total);
		printf("Aprobados: %d\n", aprobados);
		printf("Desaprobados: %d\n", desaprobados);
	} else {
		printf("El archivo está vacío.\n");
	}
}

int main() {
	struct Alumno alumnos1[100], alumnos2[100], combinados[200];
	int cantidad1 = 0, cantidad2 = 0, total3 = 0, repetidos = 0;
	int i, j, existe;
	int crear = 0;
	FILE* archivo3 = fopen("output/archivo3.dat", "wb");
	
	printf("¿Desea crear archivo1.dat y archivo2.dat? (1 = Sí, 0 = No): ");
	scanf("%d", &crear);
	if (crear == 1) {
		crearArchivo("output/archivo1.dat");
		crearArchivo("output/archivo2.dat");
	}
	
	cantidad1 = cargarArchivo("output/archivo1.dat", alumnos1, 100);
	cantidad2 = cargarArchivo("output/archivo2.dat", alumnos2, 100);
	
	if (cantidad1 < 0 || cantidad2 < 0) {
		printf("Error al leer los archivos.\n");
		return 1;
	}
	
	for (i = 0; i < cantidad1; i++) {
		combinados[total3++] = alumnos1[i];
	}
	
	for (i = 0; i < cantidad2; i++) {
		existe = 0;
		for (j = 0; j < cantidad1; j++) {
			if (alumnos2[i].dni == alumnos1[j].dni) {
				repetidos++;
				existe = 1;
				break;
			}
		}
		if (!existe) {
			combinados[total3++] = alumnos2[i];
		}
	}
	
	qsort(combinados, total3, sizeof(struct Alumno), compararDNI);
	
	if (archivo3 == NULL) {
		printf("Error al crear archivo3.dat\n");
		return 1;
	}
	fwrite(combinados, sizeof(struct Alumno), total3, archivo3);
	fclose(archivo3);
	
	printf("\n--- Resumen ---\n");
	printf("Cantidad en archivo1: %d\n", cantidad1);
	printf("Cantidad en archivo2: %d\n", cantidad2);
	printf("Total en archivo3: %d\n", total3);
	printf("Registros no cargados (DNI repetido): %d\n", repetidos);
	
	mostrarArchivo("output/archivo3.dat");
	
	return 0;
}

