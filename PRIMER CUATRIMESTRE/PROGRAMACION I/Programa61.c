/*Se tiene un parrafo que esta formado por oraciones, cada oracion esta separada por un punto (.) y cada palabra de la oracion esta separada por un asterisco (*).
Indicar cuantas oraciones tienen un parrafo e indicar cual es la oracion que tiene más palabras. (TODO EN UNA SOLA CADENA)
*/

#include <stdio.h>
#include <string.h>

int main() {
	char cadena[] = "Hola*como*estas.Estoy*bien*y*vos.Que*bueno.";
	int cant_oraciones = 0;
	int max_palabras = 0;
	int palabras_actuales = 0;
	int i = 0, j = 0, k = 0, inicio = 0;
	int mejor_inicio = 0, mejor_fin = 0;
	
	while (cadena[i] != '\0') {
		if (cadena[i] == '.') {
			cant_oraciones++;
			
			palabras_actuales = 1;
			for (j = inicio; j < i; j++) {
				if (cadena[j] == '*') {
					palabras_actuales++;
				}
			}
			
			if (palabras_actuales > max_palabras) {
				max_palabras = palabras_actuales;
				mejor_inicio = inicio;
				mejor_fin = i;
			}
			inicio = i + 1;
		}
		i++;
	}
	
	printf("Cantidad de oraciones: %d\n", cant_oraciones);
	printf("Oracion con mas palabras: ");
	for (k = mejor_inicio; k < mejor_fin; k++) {
		printf("%c", cadena[k]);
	}
	printf("\nCantidad de palabras en esa oracion: %d\n", max_palabras);
	return 0;
}
