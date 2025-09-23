import java.util.Scanner;

public class Programa4 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int opcion;
        int n1 = 0, n2 = 0;
        char respuesta = 'S';
        do {
            System.out.println("¿Qué opción desea realizar?");
            System.out.println("1. Sumar");
            System.out.println("2. Restar");
            System.out.println("3. Multiplicar");
            System.out.println("4. Dividir");
            System.out.println("0. Salir\n");
            opcion = entrada.nextInt();
            if (opcion != 0) {
                System.out.println("\nIngrese un número: ");
                n1 = entrada.nextInt();
                System.out.println("Ingrese otro número: ");
                n2 = entrada.nextInt();
                System.out.println("El resultado es: ");
            }
            switch (opcion) {
                case 1:
                    sumar(n1, n2);
                    break;

                case 2:
                    restar(n1, n2);
                    break;
                case 3:
                    multiplicar(n1, n2);
                    break;

                case 4:
                    dividir(n1, n2);
                    break;

                case 0:
                    System.out.println("Saliendo.");
                    break;

                default:
                    System.out.println("Opción incorrecta.");
                    break;
            }
            System.out.println("¿Desea realizar otra operacion? (S/N)");
            respuesta = entrada.next().charAt(0);
        } while (respuesta == 'S' || respuesta == 's');
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
