//Ejercicio 3.4
import java.util.Scanner;

public class Programa17 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        float base, altura, area;
        System.out.print("Ingrese la base del rectangulo: ");
        base = entrada.nextFloat();
        System.out.println("Ingrese la altura del rectangulo: ");
        altura = entrada.nextFloat();
        area = base * altura;
        System.out.println("El area del rectangulo es: " + area);
        entrada.close();
    }
}