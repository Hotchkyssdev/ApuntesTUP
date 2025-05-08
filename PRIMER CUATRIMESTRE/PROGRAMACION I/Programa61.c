/*Se tiene un parrafo que esta formado por oraciones, cada oracion esta separada por un punto (.) y cada palabra de la oracion esta separada por un asterisco (*).
Indicar cuantas oraciones tienen un parrafo e indicar cual es la oracion que tiene m�s palabras. (TODO EN UNA SOLA CADENA)
*/

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[] = "Hola*como*estas.Estoy*bien*y*vos.Que*bueno."; 
    int cant_oraciones = 0;
    int max_palabras = 0;
    char oracion_mayor[1000] = "";
    
    char *oracion = strtok(cadena, ".");
    
    while (oracion != NULL) {
        cant_oraciones++;

        int palabras = 1; 
        for (int i = 0; oracion[i] != '\0'; i++) {
            if (oracion[i] == '*') {
                palabras++;
            }
        }

        if (palabras > max_palabras) {
            max_palabras = palabras;
            strcpy(oracion_mayor, oracion);
        }

        oracion = strtok(NULL, ".");
    }

    printf("Cantidad de oraciones: %d\n", cant_oraciones);
    printf("Oracion con mas palabras: %s\n", oracion_mayor);
    printf("Cantidad de palabras en esa oracion: %d\n", max_palabras);

    return 0;
}

