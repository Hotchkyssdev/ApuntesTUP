import java.util.Scanner;

public class Programa5 {
    public static void main(String[] args) {
        int n1 = 0, n2 = 0;
        int opcion = 0;
        Scanner entrada = new Scanner(System.in);
        Menu menuObjeto = new Menu();

        do {
            menuObjeto.mostrarMenu();
            opcion = entrada.nextInt();

            if (opcion != 0) {
                System.out.println("\nIngrese un número: ");
                n1 = entrada.nextInt();
                System.out.println("Ingrese otro número: ");
                n2 = entrada.nextInt();
            }

            Calculadora calculadoraObjeto = new Calculadora(n1, n2);

            switch (opcion) {
                case 1:
                    System.out.println(calculadoraObjeto.getn1() + " + " + calculadoraObjeto.getn2() + " = " + calculadoraObjeto.sumar());
                    break;
                case 2:
                    System.out.println(calculadoraObjeto.getn1() + " - " + calculadoraObjeto.getn2() + " = " + calculadoraObjeto.restar());
                    break;
                case 3:
                    System.out.println(calculadoraObjeto.getn1() + " * " + calculadoraObjeto.getn2() + " = " + calculadoraObjeto.multiplicar());
                    break;
                case 4:
                    System.out.println(calculadoraObjeto.getn1() + " / " + calculadoraObjeto.getn2() + " = " + calculadoraObjeto.dividir());
                    break;
                case 0:
                    System.out.println("FIN");
                    break;
                default:
                    System.out.println("Opcion no válida");
            }
        } while (opcion != 0);
        entrada.close();
    }
}

class Menu {
    public void mostrarMenu() {
        System.out.println("\n=== CALCULADORA ===");
        System.out.println("1. Sumar");
        System.out.println("2. Restar");
        System.out.println("3. Multiplicar");
        System.out.println("4. Dividir");
        System.out.println("0. Salir");
        System.out.println("Ingrese una opción: ");
    }
}

class Calculadora {
    private int n1, n2;

    public Calculadora(int n1, int n2) {
        this.n1 = n1;
        this.n2 = n2;
    }

    public int getn1() {
        return n1;
    }

    public int getn2() {
        return n2;
    }

    public int sumar() {
        return n1 + n2;
    }

    public int restar() {
        return n1 - n2;
    }

    public int multiplicar() {
        return n1 * n2;
    }

    public double dividir() {
        if (n2 == 0) {
            System.out.println("Error: no se puede dividir por cero.");
            return 0;
        }
        if (n1 == 0 && n2 == 0) {
            System.out.println("Indeterminado.");
            return 0;
        }
        return (double) n1 / n2;
    }
}