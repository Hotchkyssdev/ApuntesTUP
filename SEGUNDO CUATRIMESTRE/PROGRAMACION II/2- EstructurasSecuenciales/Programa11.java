//Ejercicio 2.3 Repetitivas

import java.util.Scanner;

public class Programa11 {
    
    public static void menu() {
        System.out.println("Menu de opciones: ");
        System.out.println("1. Contar del  1 al 10 con for.");
        System.out.println("2. Contar del 10 al 1 con while.");
        System.out.println("3. Pedir numeros hasta que el usuario ingrese 0 usando do-while.");
        System.out.println("4. Recorrer un arreglo de enteros con for-each y mostrar sus elementos.");
        System.out.println("5. Salir");
        System.out.print("Seleccione una opcion: ");
    }

    public static void contarFor() {
        for (int i = 1; i <= 10; i++) {
            System.out.println(i);
        }
    }

    public static void contarWhile() {
        int i = 10;
        while (i >= 1) {
            System.out.println(i);
            i--;
        }
    }

    public  static void pedirNumeros(Scanner entrada) {
        int numero;
        do {
            System.out.println("Ingrese un numero (0 para salir): ");
            numero = entrada.nextInt();
            System.out.println("Numero ingresado: " + numero);
        } while (numero != 0);
    }

    public static void recorrerArreglo() {
        int[] numeros = {1, 2, 3, 4, 5};
        for (int num: numeros) {
            System.out.println(num);
        }
    }
    
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int opcion;
        do {
            menu();
            opcion = entrada.nextInt();
            switch (opcion) {
                case 1:
                    contarFor();
                    break;
                case 2:
                    contarWhile();
                    break;
                case 3:
                    pedirNumeros(entrada);
                    break;
                case 4:
                    recorrerArreglo();
                    break;
                case 5:
                    System.out.println("Saliendo del programa...");
                    break;
                default:
                    System.out.println("Opcion no valida. Intente de nuevo.");
            }
        } while (opcion != 5);
        entrada.close();
    }
}
