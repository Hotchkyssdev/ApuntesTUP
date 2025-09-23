//Ejercicio 4.8
import java.util.Scanner;

public class Programa26 {
    public static void main(String[] args) {
        String nombre, ciudad;
        int edad;
        Scanner entrada = new Scanner(System.in);
        System.out.print("Ingrese su nombre: ");
        nombre = entrada.nextLine();
        System.out.print("Ingrese su edad: ");
        edad = entrada.nextInt();
        entrada.nextLine();
        System.out.print("Ingrese su ciudad: ");
        ciudad = entrada.nextLine();
        System.out.println("\nNombre: " + nombre + "\nEdad: " + edad + "\nCiudad: " + ciudad);
        entrada.close();
    }
}