#include <stdio.h>

int main() {
    int Arreglo[10], i, j;
    int n, ordenAscendente;
    int temp;
    int opcion, busqueda;
    char continuar, continuar2, respuesta;
    int num, encontrado;
    int inicio, medio;
    int fin;
    n = sizeof(Arreglo) / sizeof(Arreglo[0]);
    do {
        for (i = 0; i < 10; i++) {
            printf("Ingrese el valor %d del arreglo: ", i);
            scanf("%d", &Arreglo[i]);
        }

        printf("Arreglo original: ");
        for (i = 0; i < 10; i++) {
            printf("%d ", Arreglo[i]);
        }

        do {
            printf("\nMenu de Ordenamiento\n");
            printf("1. Menor a Mayor.\n");
            printf("2. Mayor a Menor.\n");
            printf("3. Salir.\n");
            printf("Seleccione una opcion: ");
            scanf("%d", &opcion);
            switch (opcion) {
                case 1:
                    ordenAscendente = 1;
                    printf("Ordenando de menor a mayor...\n");
                    for (i = 0; i < n - 1; i++) {
                        for (j = 0; j < n - i - 1; j++) {
                            if (Arreglo[j] > Arreglo[j + 1]) {
                                temp = Arreglo[j];
                                Arreglo[j] = Arreglo[j + 1];
                                Arreglo[j + 1] = temp;
                            }
                        }
                    }
                    break;

                case 2:
                    ordenAscendente = 0;
                    printf("Ordenando de mayor a menor...\n");
                    for (i = 0; i < n - 1; i++) {
                        for (j = 0; j < n - i - 1; j++) {
                            if (Arreglo[j] < Arreglo[j + 1]) {
                                temp = Arreglo[j];
                                Arreglo[j] = Arreglo[j + 1];
                                Arreglo[j + 1] = temp;
                            }
                        }
                    }
                    break;

                case 3:
                    printf("Saliendo del ordenamiento...\n");
                    break;

                default:
                    printf("Opcion no valida.\n");
            }

            printf("\nArreglo Ordenado: ");
            for (i = 0; i < 10; i++) {
                printf("%d ", Arreglo[i]);
            }

            do {
                printf("\nDesea hacer una busqueda?\n");
                printf("1. Si\n");
                printf("2. No\n");
                printf("Seleccione una opcion: ");
                scanf("%d", &busqueda);

                if (busqueda == 1) {
                    printf("Ingrese el numero a buscar: ");
                    scanf("%d", &num);
                    encontrado = 0;
                    inicio = 0;
                    fin = n - 1;

                    while (inicio <= fin) {
                        medio = (inicio + fin) / 2;
                        if (Arreglo[medio] == num) {
                            printf("El numero %d se encuentra en la posicion %d.\n", num, medio);
                            encontrado = 1;
                            break;
                        }
                        if (ordenAscendente) {
                            if (Arreglo[medio] < num) {
                                inicio = medio + 1;
                            } else {
                                fin = medio - 1;
                            }
                        } else {
                            if (Arreglo[medio] > num) {
                                inicio = medio + 1;
                            } else {
                                fin = medio - 1;
                            }
                        }
                    }
                    if (!encontrado) {
                        printf("El numero %d no se encuentra en el arreglo\n", num);
                    }
                    printf("\nDesea hacer otra busqueda? (s/n): ");
                    scanf(" %c", &respuesta);
                }
            } while (respuesta == 's' || respuesta == 'S');

            printf("\nDesea continuar con otro ordenamiento? (s/n): ");
            scanf(" %c", &continuar);

        } while (continuar == 's' || continuar == 'S');

        printf("\nDesea continuar con la carga de otro arreglo? (s/n): ");
        scanf(" %c", &continuar2);

    } while (continuar2 == 's' || continuar2 == 'S');
    return 0;
}
