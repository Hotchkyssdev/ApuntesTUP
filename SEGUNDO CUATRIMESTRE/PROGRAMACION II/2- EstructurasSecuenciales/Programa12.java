//Ejercicio 2.4 Control de flujo

import java.util.Scanner;

public class Programa12 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int numero;
        int contador = 0;
        do {
            System.out.print("Ingrese un numero entero (999 para salir): ");
            numero = entrada.nextInt();
            if (numero != 999) {
                contador++;
            } else {
                break;
            }
        } while (numero != 999);
        System.out.println("Cantidad de numeros ingresados: " + contador);
        entrada.close();
    }
}