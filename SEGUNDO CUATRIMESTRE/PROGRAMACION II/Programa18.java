//Ejercicio 3.5
import java.util.Scanner;

public class Programa18 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        float nota1, nota2, nota3, promedio;
        System.out.print("Ingrese la primera nota: ");
        nota1 = entrada.nextFloat();
        System.out.print("Ingrese la segunda nota: ");
        nota2 = entrada.nextFloat();
        System.out.print("Ingrese la tercera nota: ");
        nota3 = entrada.nextFloat();
        promedio = (nota1 + nota2 + nota3) / 3;
        System.out.printf("El promedio de las notas es: %.2f\n", promedio);
        entrada.close();
    }
}