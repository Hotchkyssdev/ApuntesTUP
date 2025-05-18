/*
5) Cuántas veces aparece un número
Dado un arreglo ordenado que puede tener números repetidos, como {1, 2, 4, 4, 4, 5, 6}, 
realizar una búsqueda binaria modificada para contar cuántas veces aparece un número ingresado por el usuario.
*/

#include <stdio.h>

int main() {
    int arreglo[] = {1, 2, 4, 4, 4, 5, 6};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int num;
    int inicio = 0, fin = n - 1, primera = -1, ultima = -1;
    int cantidad;

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &num);

    // Buscar la primera aparición
    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        if (arreglo[medio] == num) {
            primera = medio;
            fin = medio - 1;
        } else if (arreglo[medio] < num) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    // Buscar la última aparición
    inicio = 0;
    fin = n - 1;
    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        if (arreglo[medio] == num) {
            ultima = medio;
            inicio = medio + 1;
        } else if (arreglo[medio] < num) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    if (primera == -1) {
        printf("El numero %d no se encuentra en el arreglo.\n", num);
    } else {
        cantidad = ultima - primera + 1;
        printf("El numero %d aparece %d veces en el arreglo.\n", num, cantidad);
    }

    return 0;
}