/*
Determinar si un alumno aprueba o desaprueba un curso, sabiendo que aprueba si su 
promedio de tres calificaciones es mayor o igual a 60; desaprueba en caso contrario. 
*/

#include <stdio.h>

int main() {
    float cal1, cal2, cal3, promedio;
    printf("Ingrese tres calificaciones: ");
    scanf("%f %f %f", &cal1, &cal2, &cal3);
    promedio = (cal1 + cal2 + cal3) / 3;
    if (promedio >= 60) {
        printf("Aprobado.\n");
    } else {
        printf("Desaprobado.\n");
    }
    return 0;
}
