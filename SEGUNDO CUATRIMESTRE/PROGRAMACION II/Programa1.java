public class Programa1 {
    public static void main(String[] args) {
        sumar(10, 3);
        restar(10, 3);
        multiplicar(10, 3);
        dividir(10, 3);
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
        } else {
            System.out.println("Error: no se puede dividir por cero.");
        }
    }
}