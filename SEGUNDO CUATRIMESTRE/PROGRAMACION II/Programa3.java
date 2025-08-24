import java.util.Scanner;

public class Programa3 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int opcion;
        int n1, n2;
        System.out.println("¿Qué opción desea realizar?");
        System.out.println("1. Sumar");
        System.out.println("2. Restar");
        System.out.println("3. Multiplicar");
        System.out.println("4. Dividir");
        opcion = entrada.nextInt();
        switch (opcion) {
            case 1:
                System.out.println("Ingrese un número: ");
                n1 = entrada.nextInt();
                System.out.println("Ingrese otro número: ");
                n2 = entrada.nextInt();
                sumar(n1, n2);
                break;

            case 2:
                System.out.println("Ingrese un número: ");
                n1 = entrada.nextInt();
                System.out.println("Ingrese otro número: ");
                n2 = entrada.nextInt();
                restar(n1, n2);
                break;
            case 3:
                System.out.println("Ingrese un número: ");
                n1 = entrada.nextInt();
                System.out.println("Ingrese otro número: ");
                n2 = entrada.nextInt();
                multiplicar(n1, n2);
                break;

            case 4:
                System.out.println("Ingrese un número: ");
                n1 = entrada.nextInt();
                System.out.println("Ingrese otro número: ");
                n2 = entrada.nextInt();
                dividir(n1, n2);
                break;

            default:
                System.out.println("Opción incorrecta.");
                break;
        }
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
