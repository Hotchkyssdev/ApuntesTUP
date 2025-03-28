/*
Teniendo en cuenta que la clave es “111MIL”, escribir un algoritmo que nos pida una 
clave. Solo tenemos 3 intentos para acertar, si fallamos los 3 intentos nos mostrara un 
mensaje indicándonos que hemos agotado esos 3 intentos. Si acertamos la clave, 
saldremos del proceso.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char clave[10];
    int intentos = 3;
    while (intentos > 0) {
        printf("Ingrese la clave: ");
        scanf("%s", clave);    
        if (strcmp(clave, "111MIL") == 0) {
            printf("Clave correcta.\n");
            break;
        } else {
            intentos--;
            printf("Clave incorrecta. Intentos restantes: %d\n", intentos);
        }
    }
    if (intentos == 0) {
        printf("Acceso bloqueado.\n");
    }
    return 0;
}






