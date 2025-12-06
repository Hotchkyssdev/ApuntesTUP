class EdadInvalidaException extends Exception {
    public EdadInvalidaException(String msg) {
        super(msg);
    }
}

public class Ejercicio2 {
    public static void validarEdad(int edad) throws EdadInvalidaException {
        if (edad < 0 || edad > 130) {
            throw new EdadInvalidaException("Edad fuera de rango: " + edad);
        }
    }

    public static void main(String[] args) {
        int[] edades = {25, -1, 200, 42};
        for (int e : edades) {
            try {
                validarEdad(e);
                System.out.println("Edad válida: " + e);
            } catch (EdadInvalidaException ex) {
                System.err.println("Capturada: " + ex.getMessage());
            }
        }
    }
}