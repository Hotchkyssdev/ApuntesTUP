import java.util.Scanner;

public class Programa2 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int n1, n2;
        System.out.println("Ingrese un número: ");
        n1 = entrada.nextInt();
        System.out.println("Ingrese otro número: ");
        n2 = entrada.nextInt();
        sumar(n1, n2);
        restar(n1, n2);
        multiplicar(n1, n2);
        dividir(n1, n2);
        entrada.close();
    }

    public static void sumar(int nro1, int nro2) {
        System.out.println(nro1 + nro2);
    }

    public static void restar(int nro1, int nro2) {
        System.out.println(nro1 - nro2);
    }

    public static void multiplicar(int nro1, int nro2) {
        System.out.println(nro1 * nro2);
    }

    public static void dividir(float nro1, float nro2) {
        if (nro2 != 0) {
            System.out.println(nro1 / nro2);
        } else if (nro1 == 0 && nro2 == 0){
            System.out.println("Indeterminado");
        } else {
            System.out.println("Error: no se puede dividir por cero.");
        }
    }
}