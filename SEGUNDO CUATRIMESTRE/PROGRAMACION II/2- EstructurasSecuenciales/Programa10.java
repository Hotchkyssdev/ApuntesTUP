//Ejercicio 2.2 sistema de calificaciones
import java.util.Scanner;

public class Programa10 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner (System.in);
        int nota;
        int nota2;
        System.out.println("Ingrese la nota: ");
        nota = entrada.nextInt();
        if (nota >= 9) {
            System.out.println("Excelente");
        } else if (nota >= 6 && nota < 9) {
            System.out.println("Aprobado");
        } else {
            System.out.println("Reprobado");
        }

        System.out.println("Ingrese la segunda nota: ");
        nota2 = entrada.nextInt();
        switch (nota2) {
            case 1:
                System.out.println("Reprobado");
                break;
            case 2:
                System.out.println("Reprobado");
                break;
            case 3:
                System.out.println("Reprobado");
                break;
            case 4:
                System.out.println("Reprobado");
                break;
            case 5:
                System.out.println("Reprobado");
                break;
            case 6:
                System.out.println("Aprobado");
                break;
            case 7:
                System.out.println("Aprobado");
                break;
            case 8:
                System.out.println("Aprobado");
                break;
            case 9:
                System.out.println("Excelente");
                break;
            case 10:
                System.out.println("Excelente");
                break;
            default:
                System.out.println("Error");
                break;
        }
        entrada.close();
    }
}

