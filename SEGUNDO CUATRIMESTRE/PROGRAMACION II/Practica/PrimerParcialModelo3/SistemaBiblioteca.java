package Practica.PrimerParcialModelo3;

import java.util.Scanner;

class Persona {
    protected String nombre;
    protected String apellido;

    public Persona(String n, String a) {
        nombre = n;
        apellido = a;
    }

    public String toString() {
        return apellido + ", " + nombre;
    }
}

class Usuario extends Persona {
    private int numeroSocio;

    public Usuario(String n, String a, int ns) {
        super(n, a);
        this.numeroSocio = ns;
    }

    @Override
    public String toString() {
        return super.toString() + " - Socio Nº " + numeroSocio;
    }
}

class Libro {
    private String titulo;

    public Libro(String t) {
        titulo = t;
    }

    public String toString() {
        return "- " + titulo;
    }
}

interface InformeDeDatos {
    public String informe();
}

class Bibliotecario extends Persona implements InformeDeDatos {
    private Libro[] librosACargo;

    public Bibliotecario(String n, String a, Libro[] libros) {
        super(n, a);
        this.librosACargo = libros;
    }

    @Override
    public String informe() {
        return "El bibliotecario " + super.toString() + " administra los libros:";
    }

    public void mostrarLibros() {
        for (Libro libro : librosACargo) {
            System.out.println(libro);
        }
    }
}

class Biblioteca {
    Scanner scanner = new Scanner(System.in);
    Bibliotecario[] bibliotecarios = new Bibliotecario[10];

    public Bibliotecario registrarBibliotecario() {
        System.out.print("Nombre: ");
        String n = scanner.nextLine();

        System.out.print("Apellido: ");
        String a = scanner.nextLine();

        System.out.print("Cantidad de libros: ");
        int c = scanner.nextInt();
        scanner.nextLine();

        Libro[] libros = new Libro[c];

        for (int i = 0; i < c; i++) {
            System.out.print("Libro " + (i + 1) + ": ");
            libros[i] = new Libro(scanner.nextLine());
        }

        return new Bibliotecario(n, a, libros);
    }

    public void mostrarInforme(InformeDeDatos obj) {
        System.out.println(obj.informe());

        if (obj instanceof Bibliotecario)
            ((Bibliotecario) obj).mostrarLibros();
    }

    public void menu() {
        int op, cb = 0;

        do {
            System.out.println("\n1. Registrar bibliotecario");
            System.out.println("2. Mostrar informes");
            System.out.println("3. Salir");
            System.out.print("Opción: ");

            op = scanner.nextInt();
            scanner.nextLine();

            switch (op) {
                case 1:
                    bibliotecarios[cb++] = registrarBibliotecario();
                    break;
                case 2:
                    for (Bibliotecario b : bibliotecarios)
                        if (b != null)
                            mostrarInforme(b);
                    break;
            }
        } while (op != 3);
    }
}

public class SistemaBiblioteca {
    public static void main(String[] args) {
        new Biblioteca().menu();
    }
}