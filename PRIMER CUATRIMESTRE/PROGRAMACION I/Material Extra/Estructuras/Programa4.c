/*
4) Búsqueda de persona por nombre
Crea una estructura Persona con los campos: nombre y DNI. 
Carga los datos de 5 personas y permite al usuario ingresar un nombre. 
El programa debe buscar y mostrar el DNI de esa persona si se encuentra en el arreglo, o informar que no existe.
*/

#include <stdio.h>
#include <string.h>

#define TAM 5

struct Persona {
    char nombre[50];
    int dni;
};

int main() {
    struct Persona personas[TAM];
    char nombreBuscado[50];
    int encontrado = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Ingrese el nombre de la persona #%d: ", i + 1);
        scanf(" %49[^\n]", personas[i].nombre);

        printf("Ingrese el DNI de %s: ", personas[i].nombre);
        scanf("%d", &personas[i].dni);
    }

    printf("\nIngrese el nombre de la persona a buscar: ");
    scanf(" %49[^\n]", nombreBuscado);

    for (int i = 0; i < TAM; i++) {
        if (strcmp(personas[i].nombre, nombreBuscado) == 0) {
            printf("DNI de %s: %d\n", personas[i].nombre, personas[i].dni);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("La persona '%s' no se encuentra en la lista.\n", nombreBuscado);
    }

    return 0;
}
