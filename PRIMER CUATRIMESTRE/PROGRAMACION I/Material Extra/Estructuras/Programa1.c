/*
1) Registro de un estudiante
Crea un programa en C que defina una estructura llamada Estudiante con los campos: 
nombre, edad y promedio. El programa debe permitir ingresar los datos de un estudiante, 
y luego mostrarlos por pantalla.
*/

#include <stdio.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    struct Estudiante estudiante;

    
    printf("Ingrese el nombre del estudiante: ");
    fgets(estudiante.nombre, sizeof(estudiante.nombre), stdin);

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiante.edad);

    printf("Ingrese el promedio del estudiante: ");
    scanf("%f", &estudiante.promedio);

    // Mostrar datos
    printf("\n--- Datos del estudiante ---\n");
    printf("Nombre: %s", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);

    return 0;
}
