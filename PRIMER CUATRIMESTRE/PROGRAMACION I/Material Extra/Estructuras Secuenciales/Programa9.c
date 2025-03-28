/*
Se desea conocer el promedio y porcentaje de hombres y mujeres cursando el 
Programación I en UTN FRRe, teniendo como dato la cantidad de hombres y mujeres de 3 
comisiones.
*/

#include <stdio.h>

int main() {
    int hombres1, hombres2, hombres3, mujeres1, mujeres2, mujeres3, totalHombres, totalMujeres, total;
    printf("Ingrese hombres y mujeres en las 3 comisiones: ");
    scanf("%d %d %d %d %d %d", &hombres1, &mujeres1, &hombres2, &mujeres2, &hombres3, &mujeres3);
    totalHombres = hombres1 + hombres2 + hombres3;
    totalMujeres = mujeres1 + mujeres2 + mujeres3;
    total = totalHombres + totalMujeres;
    printf("Promedio total: %.2f\n", (totalHombres + totalMujeres) / 3.0);
    printf("Hombres: %.2f%%, Mujeres: %.2f%%\n", (totalHombres * 100.0) / total, (totalMujeres * 100.0) / total);
    return 0;
}
