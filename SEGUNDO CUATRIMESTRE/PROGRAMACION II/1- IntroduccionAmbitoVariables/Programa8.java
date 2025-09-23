//Ejercicio 1.2 Login (ambito de variables)

import java.util.Scanner;

public class Programa8 {
    static int intentos = 0;

    public static void validarUsuario(String usuario, String clave) {
        if (usuario.equals("admin") && clave.equals("123456")) {
            System.out.println("Acceso permitido");
            System.exit(0);
        } else {
            System.out.println("Acceso denegado");
            intentos++;
        }
        if (intentos == 3) {
            System.out.println("USUARIO INVALIDO");
            intentos = 0;
            System.exit(0);
            return;
        }
    }

    public static void main(String[] args) {
        String usuario, clave;
        Scanner entrada = new Scanner(System.in);
        do {
            System.out.println("Ingrese usuario: ");
            usuario = entrada.next();
            System.out.println("Ingrese clave: ");
            clave = entrada.next();
            validarUsuario(usuario, clave);
            System.out.println("Intentos restantes: " + (3 - intentos));
        } while (intentos != 3);
        entrada.close();
    }
}
