#include <stdio.h>
#include <conio.h>

int main() {
    char cadena[5] = {'h', 'o', 'l', 'a', '\0'};
    char nombre[10], apellidos[10];
    char cad1[5];
    int i;
    printf("La cadena es:\n");
    i = 0;
    while (i < 5) {
        printf("Caracter %d: %c\n", i, cadena[i]);
        i++;
    }

    printf("Introduce tu nombre: ");
    scanf("%s", &nombre);  
    printf("Introduce tus apellidos: ");  
    scanf("%s", &apellidos);
    printf("Usted es %s %s\n",nombre,apellidos);

    i = 0;
    while (i < 5) {
        printf("Introduce un caracter: \n");
        cad1[i] = getch();
        i++;
    }

    i = 0;
    while (i < 5) {
        printf("Caracter %d: %c\n", i, cad1[i]);
        i++;
    }
    getch();
    return 0;
}

