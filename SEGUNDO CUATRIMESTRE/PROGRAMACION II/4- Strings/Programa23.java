//Ejercicio 4.5
import java.util.Scanner;

public class Programa23 {
    public static void main(String[] args) {
        String frase;
        Scanner entrada = new Scanner(System.in);
        System.out.print("Ingrese una frase: ");
        frase = entrada.nextLine();
        System.out.println("La frase en mayusculas es: " + frase.toUpperCase());
        System.out.println("La frase en minusculas es: " + frase.toLowerCase());
        entrada.close();
    }
}