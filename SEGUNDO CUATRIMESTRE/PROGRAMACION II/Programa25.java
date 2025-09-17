//Ejercicio 4.7
import java.util.Scanner;

public class Programa25 {
    public static void main(String[] args) {
        String frase, palabra;
        Scanner entrada = new Scanner(System.in);
        System.out.print("Ingrese una frase: ");
        frase = entrada.nextLine();
        System.out.print("Ingrese una palabra: ");
        palabra = entrada.nextLine();
        if (frase.contains(palabra)) {
            System.out.println("La palabra esta contenida en la frase");
            System.out.println("La palabra aparece en la posicion: " + frase.indexOf(palabra));
        } else {
            System.out.println("La palabra no esta contenida en la frase");
        }
        entrada.close();
    }
}