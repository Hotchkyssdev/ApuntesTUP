/*
2) Comparar dos cadenas
Pedile al usuario que ingrese dos palabras. 
El programa debe comparar si son iguales o no y mostrar un mensaje correspondiente. strcmp()
*/

#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[50], palabra2[50];
    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);
    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);
    
    if (strcmp(palabra1, palabra2) == 0) {
        printf("Las palabras son iguales.\n");
    } else {
        printf("Las palabras son diferentes.\n");
    }
    return 0;
}