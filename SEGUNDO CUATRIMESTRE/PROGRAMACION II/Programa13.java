//Ejercicio 2.5 Control de flujo con continue

import java.util.Scanner;

public class Programa13 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int numero;
        for (int i = 0; i < 10; i++) {
            System.out.println("Ingrese un numero entero: ");
            numero = entrada.nextInt();
            if (numero % 2 != 0) {
                continue;
            } else {
                System.out.println("El numero par es: " + numero);
            }
        }
        entrada.close();
    }
}