//Ejercicio 4.3
import java.util.Scanner;

public class Programa21 {
    public static void main(String[] args) {
        String palabra;
        Scanner entrada = new Scanner(System.in);
        System.out.print("Ingrese una palabra: ");
        palabra = entrada.nextLine();
        System.out.println("La palabra " + palabra + " tiene " + palabra.length() + " letras.");
        entrada.close();
    }
}