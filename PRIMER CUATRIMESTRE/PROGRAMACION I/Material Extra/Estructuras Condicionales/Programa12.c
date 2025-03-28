/*
Dado un numero entre 1 y 7 escriba su correspondiente día de la semana así:  
1- Lunes 2- Martes 3- Miércoles 4- Jueves 5- Viernes 6- Sábado 7- Domingo 
*/

#include <stdio.h>

int main() {
    int dia;
    printf("Ingrese un numero (1-7): ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miercoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Numero invalido\n");
    }
    return 0;
}



