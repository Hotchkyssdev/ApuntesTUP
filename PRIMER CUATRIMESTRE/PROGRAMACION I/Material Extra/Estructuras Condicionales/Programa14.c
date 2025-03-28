/*
Se desea leer un número de dos cifras, y que se muestre por pantalla sus dígitos. Luego 
informe si la suma de sus dígitos es múltiplo de 3 o no. 
*/

#include <stdio.h>

int main() {
    int num, dig1, dig2, suma;
    printf("Ingrese un numero de dos cifras: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 99) {
        dig1 = num / 10;
        dig2 = num % 10;
        suma = dig1 + dig2;
        printf("Digitos: %d y %d\n", dig1, dig2);
        if (suma % 3 == 0) {
            printf("La suma de los digitos es multiplo de 3\n");
        } else {
            printf("La suma de los digitos NO es multiplo de 3\n");
        }
    } else {
        printf("El numero no tiene dos cifras.\n");
    }
    return 0;
}

