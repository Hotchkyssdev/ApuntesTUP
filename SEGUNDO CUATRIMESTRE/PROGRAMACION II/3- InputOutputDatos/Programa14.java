//Ejercicio 3.1
import java.util.Scanner;

public class Programa14 {
    public static void main(String[] args) {
        String nombre;
        String ciudad;
        int edad;
        Scanner entrada = new Scanner(System.in);
        Scanner entrada2 = new Scanner(System.in);
        System.out.print("Ingrese su nombre: ");
        nombre = entrada.nextLine();
        System.out.print("Ingrese su edad: ");
        edad = entrada.nextInt();
        System.out.print("Ingrese su ciudad: ");
        ciudad = entrada2.nextLine();
        System.out.println("Hola " + nombre + ", tienes " + edad + " años y vives en " + ciudad);
        entrada.close();
        entrada2.close();
    }
}