/*
7) Operaciones no tan básicas
Crear un programa que muestre un menú principal donde puede elegir entre la realización de las operaciones al ingresar 
Ingreso de 2 números: 
Resta, 
División (
Potencia (nro y exponente)
Ingreso de 1 número: 
Factorial 
Tabla de multiplicación del 1 al 10 
Ingreso de n números
Suma 
Multiplicación 
*/

#include <stdio.h>
#include <math.h>

int resta(int minuendo, int sustraendo) {
	return minuendo - sustraendo;
}

float division(int dividendo, int divisor) {
	return (float) dividendo / divisor;
}

int potencia(int base, int exponente) {
	return pow(base, exponente);
}

int factorial(int numero) {
	int resultado;
	int i;
	if (numero < 0) {
		return -1; 
	}
	if (numero == 0) {
		return 1;
	}
	
	resultado = 1;
	for (i = 1; i <= numero; i++) {
		resultado *= i;
	}
	return resultado;
}

void tablaMultiplicar(int numero) {
	int i;
	printf("Tabla del %d: \n", numero);
	
	for (i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", numero, i, numero * i);
	}
}

void sumaNumeros(int numero) {
	int suma = 0, valor;
	int i;
	for (i = 1; i <= numero; i++) {
		printf("Ingrese numero %d: ", i);
		scanf("%d", &valor);
		suma += valor;
	}
	printf("Suma total: %d\n", suma);
}

void multiplicarNumeros(int numero) {
	int producto = 1, valor;
	int i;
	for (i = 1; i <= numero; i++) {
		printf("Ingrese numero %d: ", i);
		scanf("%d", &valor);
		producto *= valor;
	}
	printf("Producto total: %d\n", producto);
}

int mostrarMenu() {
	int operacion;
	printf("\n--- MENU PRINCIPAL ---\n");
	printf("1. Restar (2 numeros)\n");
	printf("2. Division (2 numeros)\n");
	printf("3. Potencia (nro y exponente)\n");
	printf("4. Factorial (1 numero)\n");
	printf("5. Tabla de multiplicar (1 numero)\n");
	printf("6. Suma de n numeros\n");
	printf("7. Multiplicacion de n numeros\n");
	printf("0. Salir\n");
	printf("\nSeleccione una opcion: ");
	scanf("%d", &operacion);
	return operacion;
}

int main() {
	int opcion;
	int a, b, n;
	do {
		opcion = mostrarMenu();
		switch (opcion) {
			case 1:
				printf("Ingrese dos numeros: ");
				scanf("%d %d", &a, &b);
				printf("El resultado de la resta: %d\n", resta(a, b));
				break;
			case 2:
				printf("Ingrese dividendo y divisor: ");
				scanf("%d %d", &a, &b);
				if (b != 0) {
					printf("Resultado de la division: %.2f\n", division(a, b));
				} else {
					printf("Error: division por cero.\n");
				}
				break;
			case 3:
				printf("Ingrese base y exponente: ");
				scanf("%d %d", &a, &b);
				printf("Resultado: %d\n", potencia(a, b));
				break;
			case 4:
				printf("Ingrese un numero: ");
				scanf("%d", &a);
				printf("Factorial: %d\n", factorial(a));
				break;
			case 5:
				printf("Ingrese un numero para hacer su tabla de multiplicar: ");
				scanf("%d", &a);
				tablaMultiplicar(a);
				break;
			case 6:
				printf("Cuantos numeros quiere sumar?: ");
				scanf("%d", &n);
				sumaNumeros(n);
				break;
			case 7:
				printf("Cuantos numeros quiere multiplicar: ");
				scanf("%d", &n);
				multiplicarNumeros(n);
				break;
			case 0:
				printf("Saliendo del programa.\n");
				break;
			default:
				printf("Opcion invalida.\n");
		}
	} while (opcion != 0);
	return 0;
}
