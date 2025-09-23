//Ejercicio 1.1 de funciones y procedimientos
import java.util.Scanner;

public class Programa7 {

    public static void menu() {
        System.out.println("=== MENU ===");
        System.out.println("1. Sumar");
        System.out.println("2. Restar");
        System.out.println("3. Multiplicar");
        System.out.println("4. Dividir");
        System.out.println("0. Salir");
        System.out.print("Ingrese una opcion: ");
    }

    public static int sumar(int n1, int n2) {
        return n1 + n2;
    }

    public static int restar(int n1, int n2) {
        return n1 - n2;
    }

    public static int multiplicar(int n1, int n2) {
        return n1 * n2;
    }

    public static double dividir(double n1, double n2) {
        if (n2 == 0) {
            System.out.println("Error: no se puede dividir por cero.");
            return 0;
        }
        if (n1 == 0 && n2 == 0) {
            System.out.println("Indeterminado");
        }
        return (int) n1 / n2;
    }

    public static void main(String[] args) {
        int n1 = 0, n2 = 0;
        int opcion = 0;
        int resultado;
        Scanner entrada = new Scanner(System.in);
        do {
            menu();
            opcion = entrada.nextInt();
            switch (opcion) {
                case 1:
                    System.out.println("Ingrese dos numeros: ");
                    n1 = entrada.nextInt();
                    n2 = entrada.nextInt();
                    resultado = sumar(n1, n2);
                    System.out.println("El resultado es: " + resultado);
                    break;
                case 2:
                    System.out.println("Ingrese dos numeros: ");
                    n1 = entrada.nextInt();
                    n2 = entrada.nextInt();
                    resultado = restar(n1, n2);
                    System.out.println("El resultado es: " + resultado);
                    break;
                case 3: 
                    System.out.println("Ingrese dos numeros: ");
                    n1 = entrada.nextInt();
                    n2 = entrada.nextInt();
                    resultado = multiplicar(n1, n2);
                    System.out.println("El resultado es: " + resultado);
                    break;
                case 4:
                    System.out.println("Ingrese dos numeros: ");
                    double n1d = entrada.nextDouble();
                    double n2d = entrada.nextDouble();
                    double resultadod = dividir(n1d, n2d);
                    System.out.println("El resultado es: " + resultadod);
                    break;
                case 0:
                    System.out.println("FIN");
                    break;
                default:
                    System.out.println("Opcion no valida");
                    break;
            }
        } while (opcion != 0);

        entrada.close();
    }
}
