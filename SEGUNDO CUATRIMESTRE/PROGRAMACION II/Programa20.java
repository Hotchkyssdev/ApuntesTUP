//Ejercicio 4.2
import java.util.Scanner;

public class Programa20 {
    public static void main(String[] args) {
        String nombre, apellido;
        Scanner entrada = new Scanner(System.in);
        System.out.print("Ingrese su nombre: ");
        nombre = entrada.nextLine();
        System.out.print("Ingrese su apellido: ");
        apellido = entrada.nextLine();
        System.out.println("Su nombre completo es: " + nombre + " " + apellido);
        entrada.close();
    }
}