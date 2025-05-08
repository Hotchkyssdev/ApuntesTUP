#include <stdio.h>
#include <conio.h>

int main() {
    char cadena1[20], cadena2[20];
    char caracter;
    int i, contador1 = 0, contador2 = 0;

    printf("Introduce la primera cadena: ");
    scanf("%s", cadena1);
    printf("Introduce la segunda cadena: ");
    scanf("%s", cadena2);

    printf("Introduce un caracter a buscar: ");
    scanf(" %c", &caracter);

    for (i = 0; cadena1[i] != '\0'; i++) {
        if (cadena1[i] == caracter) {
            contador1++;
        }
    }

    for (i = 0; cadena2[i] != '\0'; i++) {
        if (cadena2[i] == caracter) {
            contador2++;
        }
    }

    if (contador1 > contador2) {
        printf("El caracter '%c' aparece mas veces en la primera cadena (%d veces).\n", caracter, contador1);
    } else if (contador2 > contador1) {
        printf("El caracter '%c' aparece mas veces en la segunda cadena (%d veces).\n", caracter, contador2);
    } else {
        printf("El caracter '%c' aparece la misma cantidad de veces en ambas cadenas (%d veces).\n", caracter, contador1);
    }

    return 0;
}
