/*
Cargar el siguiente texto en una cadena en etapa de declaracion. Cada palabra estara separada por simbolos - y cada oracion por simbolo *

Definir la dimension de la cadena usando #define

Usar una funcion predeterminada para indicar la longitud de la cadena, mostrar el resultado por pantalla. Mostrar la cadena de la oracion considerando una oracion por debajo de la otra separada por una linea en blanco. Indicar cuantas vocales en total tiene el texto

Usar una funcion predeterminada para determinar si una letra que se ingresa por teclado corresponde a una vocal en la cadena

Indicar cual es la oracion mas larga y cual la mas corta.

Indicar cuantas palabras tiene cada oracion.

"Hoy es miercoles. Hoy es el parcial de laboratorio. De la materia programacion 1"
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 300

int esVocal(char letra) {
    letra = tolower(letra);
    return letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u';
}

int contarVocales(char cadena[]) {
    int contador = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (esVocal(cadena[i])) {
            contador++;
        }
    }
    return contador;
}

int contarPalabras(char oracion[]) {
    int palabras = 1;
    for (int i = 0; oracion[i] != '\0'; i++) {
        if (oracion[i] == '-') {
            palabras++;
        }
    }
    return palabras;
}

int main() {
    char texto[MAX] = "Hoy-es-miercoles.*Hoy-es-el-parcial-de-laboratorio.*De-la-materia-programacion-1*";
    char oraciones[10][MAX];
    int cantidadOraciones = 0;
    int totalVocales = 0;
    int palabrasPorOracion[10];
    int i = 0, j = 0;
	int maxIndex = 0, minIndex = 0;

    // Separar oraciones por '*'
    while (texto[i] != '\0') {
        if (texto[i] != '*') {
            oraciones[cantidadOraciones][j++] = texto[i];
        } else {
            oraciones[cantidadOraciones][j] = '\0';
            cantidadOraciones++;
            j = 0;
        }
        i++;
    }

    printf("Longitud total de la cadena: %d\n", (int)strlen(texto));
    printf("\nTexto separado por oraciones:\n");

    

    for (i = 0; i < cantidadOraciones; i++) {
        printf("\nOracion %d:\n%s\n", i + 1, oraciones[i]);

        palabrasPorOracion[i] = contarPalabras(oraciones[i]);
        int vocales = contarVocales(oraciones[i]);
        totalVocales += vocales;

        if (palabrasPorOracion[i] > palabrasPorOracion[maxIndex]) {
            maxIndex = i;
        }
        if (palabrasPorOracion[i] < palabrasPorOracion[minIndex]) {
            minIndex = i;
        }
    }

    printf("\nTotal de vocales en el texto: %d\n", totalVocales);

    char letra;
    printf("Ingrese una letra para verificar si es vocal y esta en la cadena: ");
    scanf(" %c", &letra);

    if (esVocal(letra)) {
        if (strchr(texto, letra) || strchr(texto, toupper(letra)) || strchr(texto, tolower(letra))) {
            printf("La letra '%c' es una vocal y esta en la cadena.\n", letra);
        } else {
            printf("La letra '%c' es una vocal pero no esta en la cadena.\n", letra);
        }
    } else {
        printf("La letra '%c' no es una vocal.\n", letra);
    }

    printf("\nCantidad de palabras por oracion:\n");
    for (i = 0; i < cantidadOraciones; i++) {
        printf("Oracion %d: %d palabras\n", i + 1, palabrasPorOracion[i]);
    }

    printf("\nLa oracion mas larga (%d palabras): %s\n", palabrasPorOracion[maxIndex], oraciones[maxIndex]);
    printf("La oracion mas corta (%d palabras): %s\n", palabrasPorOracion[minIndex], oraciones[minIndex]);

    return 0;
}


