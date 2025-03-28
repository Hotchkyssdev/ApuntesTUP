#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminante, raiz1, raiz2, parteReal, parteImaginaria;
    printf("Ingrese el coeficiente a: ");
    scanf("%lf", &a);
    printf("Ingrese el coeficiente b: ");
    scanf("%lf", &b);
    printf("Ingrese el coeficiente c: ");
    scanf("%lf", &c);
    if (a == 0) {
        printf("Error: 'a' no puede ser cero en una ecuacion cuadratica.");
        return 1;
    }
    discriminante = b * b - 4 * a * c;
    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b + sqrt(discriminante)) / (2 * a);
        printf("Las raices son reales y diferentes.\n");
        printf("x1 = %.2f\n", raiz1);
        printf("x2 = %.2f\n", raiz2);
    } else if (discriminante == 0) {
        raiz1 = -b / (2 * a);
        printf("La ecuacion tiene una unica raiz real: \n");
        printf("x = %.2f\n", raiz1);
    } else {
        parteReal = -b / (2 * a);
        parteImaginaria = sqrt(-discriminante) / (2 * a);
        printf("Las raices son complejas y conjugadas: \n");
        printf("x1 = %.2f + %.2fi\n", parteReal, parteImaginaria);
        printf("x2 = %.2f + %.2fi\n", parteReal, parteImaginaria);
    }
    return 0;
}



