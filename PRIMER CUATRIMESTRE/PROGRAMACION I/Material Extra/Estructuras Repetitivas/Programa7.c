/*
Escribir un algoritmo que permita ingresar para los N alumnos de una universidad:  
a. SEXO ( ‘M’  o ‘F’ ) , edad   y carrera ( ‘A’,’B’,’C’ ) .  
Imprimir por pantalla la carrera con menor promedio de edad de sus alumnos que son 
varones.
*/

#include <stdio.h>

int main() {
    int N, edad, contadorA = 0, contadorB = 0, contadorC = 0, sumaA = 0, sumaB = 0, sumaC = 0;
    char sexo, carrera;
    printf("Ingrese cantidad de alumnos: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        printf("Ingrese sexo (M/F), edad y carrera (A/B/C): ");
        scanf(" %c %d %c", &sexo, &edad, &carrera);
        if (sexo == 'M') {
            if (carrera == 'A') {
                sumaA += edad;
                contadorA++;
            } else if (carrera == 'B') {
                sumaB += edad;
                contadorB++;
            } else if (carrera == 'C') {
                sumaC += edad;
                contadorC++;
            }
        }
    }
    char menorCarrera = 'A';
    float menorProm = (contadorA ? (float)sumaA / contadorA : 9999);
    if (contadorB && (float) sumaB / contadorB < menorProm) {
        menorProm = (float) sumaB / contadorB;
        menorCarrera = 'B';
    }
    if (contadorC && (float) sumaC / contadorC < menorProm) {
        menorProm = (float) sumaC / contadorC;
        menorCarrera = 'C';
    }
    printf("La carrera con menor promedio de edad de varones es %c\n", menorCarrera);
    return 0;
}




