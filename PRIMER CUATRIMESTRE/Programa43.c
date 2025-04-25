#include <stdio.h>

int main() {
	int cantArticulos, i = 1;
	float precio, total, sumaTotal, sumaSinDescuento;
	int cantUnidades;
	float resultado;
	char nomArticulo[50];
	printf("Ingrese la cantidad de articulos a ingresar: ");
	scanf("%d", &cantArticulos);
	for (i = 1; i <= cantArticulos; i++) {
		printf("\nIngrese el nombre del articulo: ");
		scanf(" %s", &nomArticulo);
		printf("Ingrese el precio del articulo: ");
		scanf("%f", &precio);
		printf("Ingrese la cantidad de unidades: ");
		scanf("%d", &cantUnidades);
		resultado = precio * cantUnidades;
		sumaSinDescuento = sumaSinDescuento + resultado;
		total = resultado * 0.85;
		printf("El total a pagar del articulo %d es: %.2f\n", i, total);
		sumaTotal = sumaTotal + total;
	}
	printf("\nFactura:\n");
	printf("Total del importe sin descuentos: %.2f\n", sumaSinDescuento);
	printf("Total a Pagar con descuento aplicado del 15 por ciento: %.2f\n", sumaTotal);
	return 0;
}
