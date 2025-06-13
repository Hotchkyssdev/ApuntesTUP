/*
Dado un arreglo de estructura que tiene los siguientes elementos
Numero del producto
nombre del producto
cantidad de productos en stock

Se pide:
A) Cargar el arreglo de estructura
B) Ordenar el arreglo por numero de producto
C) Ingresar un numero de producto por teclado
D) Mostrar el contenido de arreglo de estructura
*/

#include <stdio.h>
#include <string.h>

struct Producto {
        int numeroProducto;
        char nombreProducto[50];
        int cantidadStock;
};

void ordenamiento(struct Producto productos[], int n) {
    struct Producto tempProducto;

    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (productos[j].numeroProducto > productos[j + 1].numeroProducto) {
                tempProducto = productos[j];
                productos[j] = productos[j + 1];
                productos[j + 1] = tempProducto;
            }
        }
    }
}

int busquedaBinaria(struct Producto productos[], int n, int valor) {
    int inicio = 0, medio, fin;
    int encontrado = 0;
    fin = n - 1;

    while (inicio <= fin) {
		medio = (inicio + fin) / 2;
		if(productos[medio].numeroProducto == valor) {
			printf("Valor encontrado en la posicion %d.\n", medio + 1);
			encontrado = 1;
			break;
		} else if (productos[medio].numeroProducto < valor) {
			inicio = medio + 1;
		} else {
			fin = medio - 1;
		}
	}
	if (!encontrado) {
		printf("Valor no encontrado en el arreglo.\n");
	}
    return encontrado;
}

int main() {

    struct Producto productos[100];

    int n, i;
    int valor;
    char nombres[100];

    printf("Ingrese el numero de productos: ");
    scanf("%d", &n);
    
    if (n <= 0 || n > 100) {    
        printf("Numero de productos no valido. Debe ser entre 1 y 100.\n");
        return 1;
    } 

    for (i = 0; i < n; i++) {
        printf("\nIngrese los datos del producto %d:\n", i + 1);
        printf("Numero del producto: ");
        scanf("%d", &productos[i].numeroProducto);
        printf("Nombre del producto: ");
        scanf("%s", productos[i].nombreProducto);
        printf("Cantidad en stock: ");
        scanf("%d", &productos[i].cantidadStock);
    }

    ordenamiento(productos, n);

    printf("\nContenido del arreglo de productos ordenado:\n");
    for (i = 0; i < n; i++) {
        printf("Producto %d: Numero: %d, Nombre: %s, Stock: %d\n", i + 1, productos[i].numeroProducto, productos[i].nombreProducto, productos[i].cantidadStock);
    }

    printf("\nIngrese un numero de producto a buscar: ");
    scanf("%d", &valor);
    
    busquedaBinaria(productos, n, valor);

    nombres[0] = '\0';
    for (i = 0; i < n; i++) {
        strcat(nombres, productos[i].nombreProducto);
        if (i == n - 1) {
            strcat(nombres, ".");
        } else {
            strcat(nombres, ", ");
        }
    }

    printf("\nNombres de los productos: %s\n", nombres);
    return 0;
}
