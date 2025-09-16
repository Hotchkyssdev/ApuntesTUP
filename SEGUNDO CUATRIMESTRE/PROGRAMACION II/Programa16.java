//Ejercicio 3.3
import java.util.Scanner;

public class Programa16 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        float celsius, fahrenheit;
        System.out.print("Ingrese la temperatura en grados Celsius: ");
        celsius = entrada.nextFloat();
        fahrenheit = (celsius * 9/5) + 32;
        System.out.printf("La temperatura en grados Fahrenheit es: %.2f\n", fahrenheit);
        entrada.close();
    }
}