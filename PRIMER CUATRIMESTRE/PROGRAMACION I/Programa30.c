#include <stdio.h>

int main() {
	float contLocal = 0, contVisitante = 0, contEmpate = 0, partidosJugados = 0;
	int a, b;
	float vicLocal, vicVisitante, empate;
	char rep = 's', porcentaje = '%';
	while (rep == 's' || rep == 'S') {
		printf("Ingrese el resultado del partido: ");
		scanf("%d %d", &a, &b);
		partidosJugados++;
		if (a > b) {
			contLocal++;
		} else if (b > a) {
			contVisitante++;
		} else {
			contEmpate++;
		}
 		printf("Quiere ingresar otro resultado? (s/n): ");
		scanf(" %c", &rep);
	}
	vicLocal = contLocal / partidosJugados;
	vicVisitante = contVisitante / partidosJugados;
	empate = contEmpate / partidosJugados;
	printf("\nResultados\n");
	printf("Victorias del equipo local: %.0f\n", contLocal);
	printf("Victorias del equipo visitante: %.0f\n", contVisitante);
	printf("Empates: %.0f\n", contEmpate);
	printf("Las probabilidades de ganar del equipo local es: %.2f%c\n", vicLocal * 100, porcentaje);
	printf("Las probabilidades de ganar del equipo visitante es: %.2f%c\n", vicVisitante * 100, porcentaje);
	printf("Las probabilidades de empate es: %.2f%c\n", empate * 100, porcentaje);
	return 0;
}

