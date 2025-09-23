//Ejercicio 2.1 numeros
import java.util.Scanner;

public class Programa9 {
    public static void main(String[] args) {
        int n1, n2;
        Scanner entrada = new Scanner(System.in);
        int suma, resta, producto;
        float division;
        System.out.println("Ingrese el primer numero: ");
        n1 = entrada.nextInt();
        System.out.println("Ingrese el segundo numero: ");
        n2 = entrada.nextInt();
        suma = n1 + n2;
        resta = n1 - n2;
        producto = n1 * n2;
        division = (float) n1 / n2;
        System.out.println("El resultado de la suma es: " + suma);
        System.out.println("El resultado de la resta es: " + resta);
        System.out.println("El resultado del producto es: " + producto);
        System.out.println("El resultado de la division es: " + division);
        entrada.close();
    }
} 
