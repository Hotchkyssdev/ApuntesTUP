/*
Calcula el precio de un boleto de viaje, tomando en cuenta el número de kilómetros que 
se van a recorrer, siendo el precio Bs/.10,50 por Km.
*/

#include <stdio.h>

int main() {
    float km, precio;
    printf("Ingrese la cantidad de kilometros a recorrer: ");
    scanf("%f", &km);
    precio = km * 10.50;
    printf("El precio del boleto es: $%.2f Bs\n", precio);
    return 0;
}


