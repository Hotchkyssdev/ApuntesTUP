/*
5) Registro de alumnos y promedio de notas
Define una estructura Alumno con los campos: nombre, nota1, nota2 y nota3. 
Carga un arreglo con 5 alumnos, calcula el promedio de notas de cada uno y 
muestra el nombre del alumno con el mejor promedio.
*/

#include <stdio.h>
#include <string.h>

#define TAM 5

struct Alumno {
    char nombre[50];
    float nota1;
    float nota2;
    float nota3;
    float promedio;
};

int main() {
    struct Alumno alumnos[TAM];
    float mejorPromedio = 0.0;
    int indiceMejor = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Ingrese el nombre del alumno #%d: ", i + 1);
        scanf(" %49[^\n]", alumnos[i].nombre);

        printf("Ingrese la nota 1 de %s: ", alumnos[i].nombre);
        scanf("%f", &alumnos[i].nota1);

        printf("Ingrese la nota 2 de %s: ", alumnos[i].nombre);
        scanf("%f", &alumnos[i].nota2);

        printf("Ingrese la nota 3 de %s: ", alumnos[i].nombre);
        scanf("%f", &alumnos[i].nota3);

        alumnos[i].promedio = (alumnos[i].nota1 + alumnos[i].nota2 + alumnos[i].nota3) / 3.0;

        if (alumnos[i].promedio > mejorPromedio) {
            mejorPromedio = alumnos[i].promedio;
            indiceMejor = i;
        }

        printf("\n");
    }

    printf("El alumno con el mejor promedio es %s con %.2f\n", alumnos[indiceMejor].nombre, alumnos[indiceMejor].promedio);

    return 0;
}
