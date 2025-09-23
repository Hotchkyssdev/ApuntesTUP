//Ejercicio de Paso por valor y referencia 1.3

public class Programa6 {

    public static int duplicarNumero(int x) {
        x = x * 2;
        return x;
    }   

    public static void duplicarArreglo(int [] arr) {
        for (int i = 0; i < arr.length; i++) {
            arr[i] = duplicarNumero(arr[i]);
        }
        System.out.println("Dentro de duplicar arreglo, los valores se han duplicado");
    }
    
    public static void main(String [] args) {
        int numero = 7;
        System.out.println("Antes de duplicar numero, el valor es: " + numero);
        duplicarNumero(numero);
        System.out.println("El valor duplicado es: " + duplicarNumero(numero));

        System.out.println("----------------------------------------");

        int [] arreglo = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println("Antes de la duplicacion, los valores son: ");
        for (int i = 0; i < arreglo.length; i++) {
            System.out.print(arreglo[i] + " ");
        }
        System.out.println();
        duplicarArreglo(arreglo);
        System.out.println("Valores duplicados: ");
        for (int i = 0; i < arreglo.length; i++) {
            System.out.print(arreglo[i] + " ");
        }
    }
}