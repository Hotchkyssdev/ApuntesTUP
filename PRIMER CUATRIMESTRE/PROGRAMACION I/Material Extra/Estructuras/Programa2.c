/*
2) Listado de productos
Crea una estructura llamada Producto con los campos: nombre, precio y cantidad. 
Luego, crea un arreglo para guardar 5 productos. 
El programa debe permitir ingresar los datos de los productos, y luego mostrar un listado con el nombre y 
el valor total en stock (precio × cantidad) de cada uno.
*/

#include <stdio.h>

// Definir la estructura Producto
struct Producto {
    char nombre[50];
    float precio;
    int cantidad;
};

int main() {
    struct Producto productos[5];

    printf("Ingrese los datos de 5 productos:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nProducto #%d:\n", i + 1);

        printf("Nombre: ");
        scanf(" %49[^\n]", productos[i].nombre); // Leer hasta salto de línea (evita perder el primer carácter)

        printf("Precio: ");
        scanf("%f", &productos[i].precio);

        printf("Cantidad: ");
        scanf("%d", &productos[i].cantidad);
    }

    // Mostrar listado de productos y valor total en stock
    printf("\n--- Listado de productos ---\n");
    for (int i = 0; i < 5; i++) {
        float valorTotal = productos[i].precio * productos[i].cantidad;
        printf("Producto: %s\n", productos[i].nombre);
        printf("Valor total en stock: %.2f\n\n", valorTotal);
    }

    return 0;
}

