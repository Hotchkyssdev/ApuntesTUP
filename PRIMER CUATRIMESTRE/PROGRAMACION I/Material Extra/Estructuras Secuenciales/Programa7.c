/*
Un profesor desea saber qué porcentaje de hombres y qué porcentaje de mujeres hay en 
un grupo de estudiantes. 
*/

#include <stdio.h>

int main() {
    int hombres, mujeres, total;
    printf("Ingrese la cantidad de hombres y mujeres: ");
    scanf("%d %d", &hombres, &mujeres);
    total = hombres + mujeres;
    printf("Hombres: %.2f%%, Mujeres: %.2f%%\n", (hombres * 100.0) / total, (mujeres * 100.0) / total);
    return 0;
}