//Ejercicio 4.6
import java.util.Scanner;

public class Programa24 {
    public static void main(String[] args) {
        String palabra;
        Scanner entrada = new Scanner(System.in);
        System.out.print("Ingrese una palabra: ");
        palabra = entrada.nextLine();
        for (int i = 0; i < palabra.length(); i++) {
            System.out.println(palabra.charAt(i));
        }
        entrada.close();
    }
}