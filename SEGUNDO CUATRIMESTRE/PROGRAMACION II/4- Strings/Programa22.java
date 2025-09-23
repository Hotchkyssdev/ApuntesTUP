//Ejercicio 4.4
import java.util.Scanner;

public class Programa22 {
    public static void main(String[] args) {
        String palabra1, palabra2;
        Scanner entrada = new Scanner(System.in);
        System.out.print("Ingrese la primer palabra: ");
        palabra1 = entrada.nextLine();
        System.out.print("Ingrese la segunda palabra: ");
        palabra2 = entrada.nextLine();
        if (palabra1.equals(palabra2)) {
            System.out.println("Las palabras son exactamente iguales.");
        } else if (palabra1.equalsIgnoreCase(palabra2)) {
            System.out.println("Las palabras son iguales ignorando mayusculas.");
        } else {
            System.out.println("Las palabras son diferentes.");
        }
        entrada.close();
    }
}