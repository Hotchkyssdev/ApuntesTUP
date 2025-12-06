import java.util.InputMismatchException;
import java.util.Scanner;

public class Ejercicio1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.print("Dividendo (int): ");
            int a = sc.nextInt();
            System.out.print("Divisor (int): ");
            int b = sc.nextInt();

            int resultado = a / b; // puede lanzar ArithmeticException
            System.out.println("Resultado: " + resultado);
        } catch (InputMismatchException e) {
            System.err.println("Debe ingresar números enteros. " + e.getMessage());
        } catch (ArithmeticException e) {
            System.err.println("Error en la operación: división por cero.");
        } finally {
            System.out.println("Fin del programa.");
            sc.close();
        }
    }
}
