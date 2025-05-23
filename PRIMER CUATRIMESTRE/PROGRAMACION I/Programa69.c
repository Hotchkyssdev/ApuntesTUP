/*
dado un arreglo de 10 numeros enteros positivos diferentes sin elementos repetidos, se pide:
A) declarar el arreglo en etapa de declaracion
B) generar un nuevo arreglo con aquellos numeros que son multiplos de 3 y otro con el resto del arreglo original
C) mostrar los 3 arreglos, usar procedimiento
D) si el arreglo que almacena los multiplos de 3 y el elemento se pide, ordenar los elementos de menor a mayor, usar funcion para ordenar
E) completar el arreglo ordenado con multiplos de 3 de tal forma que mantenga la condicion de ordenado (Usar funcion o procedimiento para completar)
F) Indicar cuantos elementos fueron agregados
*/

#include <stdio.h>

#define TAM 10
#define TAM_EXTRA 5

// Procedimiento para mostrar arreglos
void mostrarArreglo(int arr[], int tam, char nombre[]) {
    int i;
    printf("%s: ", nombre);
    for(i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Función para ordenar un arreglo de menor a mayor (burbuja)
void ordenarArreglo(int arr[], int tam) {
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

// Función para verificar si un valor ya está en el arreglo
int insertarOrdenado(int arr[], int tam, int valor) {
    int i;
    for(i = 0; i < tam; i++) {
        if(arr[i] == valor) return 0;
    }
    return 1;
}

int main() {
    // A) Declarar el arreglo en etapa de declaración
    int original[TAM] = {5, 9, 12, 7, 18, 21, 2, 8, 15, 4};
    int multiplos3[TAM + TAM_EXTRA], resto[TAM];
    int tamM3 = 0, tamResto = 0;
    int i, agregados = 0;

    // B) Generar nuevos arreglos
    for(i = 0; i < TAM; i++) {
        if(original[i] % 3 == 0) {
            multiplos3[tamM3] = original[i];
            tamM3++;
        } else {
            resto[tamResto] = original[i];
            tamResto++;
        }
    }

    // C) Mostrar los 3 arreglos
    mostrarArreglo(original, TAM, "Original");
    mostrarArreglo(multiplos3, tamM3, "Multiplos de 3");
    mostrarArreglo(resto, tamResto, "Resto");

    // D) Ordenar el arreglo de múltiplos de 3
    ordenarArreglo(multiplos3, tamM3);
    printf("\nMultiplos de 3 ordenados:\n");
    mostrarArreglo(multiplos3, tamM3, "Multiplos de 3");

    // E) Completar el arreglo ordenado con múltiplos de 3 faltantes (ejemplo: 3, 6, 24)
    int nuevos[] = {3, 6, 24};
    int tamNuevos = 3;
    for(i = 0; i < tamNuevos; i++) {
        if(insertarOrdenado(multiplos3, tamM3, nuevos[i])) {
            // Solo si se insertó, aumentar tamaño y contador
            int j, pos = 0;
            // Encontrar posición de inserción
            while(pos < tamM3 && multiplos3[pos] < nuevos[i]) pos++;
            // Desplazar a la derecha
            for(j = tamM3; j > pos; j--) {
                multiplos3[j] = multiplos3[j-1];
            }
            multiplos3[pos] = nuevos[i];
            tamM3++;
            agregados++;
        }
    }

    printf("\nMultiplos de 3 completado y ordenado:\n");
    mostrarArreglo(multiplos3, tamM3, "Multiplos de 3");

    // F) Indicar cuántos elementos fueron agregados
    printf("\nCantidad de elementos agregados: %d\n", agregados);

    return 0;
}

