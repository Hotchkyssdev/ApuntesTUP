//Ejercicio 3.2
import java.util.Scanner;

public class Programa15 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int n1, n2, suma, producto;
        System.out.print("Ingrese el primer numero: ");
        n1 = entrada.nextInt();
        System.out.print("Ingrese el segundo numero: ");
        n2 = entrada.nextInt();
        suma = n1 + n2;
        producto = n1 * n2;
        System.out.println("La suma es: " + suma);
        System.out.printf("El producto es: %d\n", producto);
        entrada.close();
    }
}