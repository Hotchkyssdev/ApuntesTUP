/*
Dados dos arreglos ordenados de mayor a menor sin elementos repetidos se pide:
A) Generar un nuevo arreglo ordenado que contenga a ambos arreglos, no debe contener elementos repetidos. Mostrar el resultado por pantalla usando procedimiento
B) Mostrar el arreglo de menor a mayor (usar procedimiento)
C) Ingresar un elemento por teclado y verificar si se encuentra en el arreglo (usar funcion para realizar la busqueda binaria)
*/

#include <stdio.h>

#define TAM1 5
#define TAM2 6
#define TAM3 (TAM1+TAM2)

// Procedimiento para mostrar arreglo
void mostrarArreglo(int arr[], int tam, char nombre[]) {
    int i;
    printf("%s: ", nombre);
    for(i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Procedimiento para mostrar arreglo de menor a mayor
void mostrarArregloMenorAMayor(int arr[], int tam, char nombre[]) {
    int i;
    printf("%s: ", nombre);
    for(i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Ordenar de menor a mayor (burbuja)
void ordenarMenorAMayor(int arr[], int tam) {
    int i, j, aux;
    for(i = 0; i < tam-1; i++) {
        for(j = 0; j < tam-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}

// Búsqueda binaria (arreglo ordenado de menor a mayor)
int busquedaBinaria(int arr[], int tam, int valor) {
    int inicio = 0, fin = tam-1, medio;
    while(inicio <= fin) {
        medio = (inicio + fin) / 2;
        if(arr[medio] == valor)
            return medio;
        else if(arr[medio] < valor)
            inicio = medio + 1;
        else
            fin = medio - 1;
    }
    return -1;
}

int main() {
    // Ejemplo de arreglos ordenados de mayor a menor y sin repetidos
    int arr1[TAM1] = {20, 15, 12, 8, 3};
    int arr2[TAM2] = {25, 18, 15, 10, 8, 2};
    int arr3[TAM3];
    int tam3 = 0;
    int i, j, existe;

    // A) Unir arreglos sin repetidos y ordenados de mayor a menor
    // Copiar arr1
    for(i = 0; i < TAM1; i++) {
        arr3[tam3++] = arr1[i];
    }
    // Copiar arr2 si no está en arr3
    for(i = 0; i < TAM2; i++) {
        existe = 0;
        for(j = 0; j < tam3; j++) {
            if(arr2[i] == arr3[j]) {
                existe = 1;
                break;
            }
        }
        if(!existe) {
            arr3[tam3++] = arr2[i];
        }
    }
    // Ordenar de mayor a menor (burbuja)
    for(i = 0; i < tam3-1; i++) {
        for(j = 0; j < tam3-i-1; j++) {
            if(arr3[j] < arr3[j+1]) {
                int aux = arr3[j];
                arr3[j] = arr3[j+1];
                arr3[j+1] = aux;
            }
        }
    }
    mostrarArreglo(arr3, tam3, "Arreglo combinado (mayor a menor)");

    // B) Mostrar el arreglo de menor a mayor
    ordenarMenorAMayor(arr3, tam3);
    mostrarArregloMenorAMayor(arr3, tam3, "Arreglo combinado (menor a mayor)");

    // C) Buscar elemento con búsqueda binaria
    int valor, pos;
    printf("Ingrese un valor a buscar: ");
    scanf("%d", &valor);
    pos = busquedaBinaria(arr3, tam3, valor);
    if(pos != -1) {
        printf("El valor %d se encuentra en la posicion %d del arreglo ordenado de menor a mayor.\n", valor, pos);
    } else {
        printf("El valor %d NO se encuentra en el arreglo.\n", valor);
    }

    return 0;
}

