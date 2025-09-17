//Ejercicio 4.1
import java.util.Scanner;

public class Programa19 {
    public static void main(String[] args) {
        String nombre;
        Scanner entrada = new Scanner(System.in);
        System.out.print("Ingrese un nombre: ");
        nombre = entrada.nextLine();
        System.out.println("Hola, " + nombre + " ¡bienvenido a Java!");
        entrada.close();
    }
}