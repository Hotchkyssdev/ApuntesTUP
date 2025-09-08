package Repaso;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class Libro {
    private String nombre;
    private String autor;
    private int isbn;

    public Libro(String nombre, String autor, int isbn) {
        this.nombre = nombre;
        this.autor = autor;
        this.isbn = isbn;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getAutor() {
        return autor;
    }

    public int getIsbn() {
        return isbn;
    }

    //toString para mostrar detalles
    @Override
    public String toString() {
        return "Libro: " + nombre + " | Autor: " + autor + " | ISBN: " + isbn;
    }
}

class Biblioteca {
    private ArrayList<Libro> libros = new ArrayList<>();
    private Scanner entrada = new Scanner(System.in);

    public void mostrarMenu() {
        int opcion;
        do {
            System.out.println("BIBLIOTECA - MENÚ DE OPCIONES");
            System.out.println("==================================");
            System.out.println("1. Agregar libro");
            System.out.println("2. Buscar libro");
            System.out.println("3. Eliminar libro");
            System.out.println("4. Listar libros");
            System.out.println("5. Ordenar libros alfabéticamente");
            System.out.println("6. Editar libro indicando índice");
            System.out.println("7. Salir");
            System.out.println("==================================");
            System.out.print("Ingrese una opción: ");

            opcion = entrada.nextInt();
            entrada.nextLine(); 

            switch (opcion) {
                case 1: 
                    agregarLibro(); 
                    break;
                case 2: 
                    buscarLibro(); 
                    break;
                case 3: 
                    eliminarLibro(); 
                    break;
                case 4: 
                    listarLibros();     
                    break;
                case 5:     
                    ordenarLibros();    
                    break;
                case 6: 
                    editarLibro(); 
                    break;
                case 7: 
                    System.out.println("Saliendo..."); 
                    break;
                default: 
                    System.out.println("Opción no válida.");
            }
        } while (opcion != 7);
    }

    public void agregarLibro() {
        System.out.print("Ingrese el nombre del libro: ");
        String nombre = entrada.nextLine();
        System.out.print("Ingrese el autor: ");
        String autor = entrada.nextLine();
        System.out.print("Ingrese el ISBN (número): ");
        int isbn = entrada.nextInt();
        entrada.nextLine(); 

        Libro libro = new Libro(nombre, autor, isbn);
        libros.add(libro);
        System.out.println("Libro agregado correctamente.");
    }

    public void buscarLibro() {
        System.out.print("Ingrese el nombre del libro a buscar: ");
        String nombre = entrada.nextLine();

        boolean encontrado = false;
        for (int i = 0; i < libros.size(); i++) {
            if (libros.get(i).getNombre().equalsIgnoreCase(nombre)) {
                System.out.println("Libro encontrado en la posición " + (i+1) + ": " + libros.get(i));
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            System.out.println("El libro no se encuentra en la biblioteca.");
        }
    }

    public void eliminarLibro() {
        System.out.print("Ingrese el nombre del libro a eliminar: ");
        String nombre = entrada.nextLine();

        boolean eliminado = libros.removeIf(libro -> libro.getNombre().equalsIgnoreCase(nombre));
        if (eliminado) {
            System.out.println("Libro eliminado correctamente.");
        } else {
            System.out.println("El libro no se encontró en la biblioteca.");
        }
    }

    public void listarLibros() {
        if (libros.isEmpty()) {
            System.out.println("La biblioteca está vacía.");
        } else {
            System.out.println("\nListado de libros:");
            for (int i = 0; i < libros.size(); i++) {
                System.out.println(i+1 + " - " + libros.get(i));
            }
        }
    }

    public void ordenarLibros() {
        if (libros.isEmpty()) {
            System.out.println("No hay libros para ordenar.");
            return;
        }
        Collections.sort(libros, Comparator.comparing(Libro::getNombre, String.CASE_INSENSITIVE_ORDER));
        System.out.println("Libros ordenados alfabéticamente.");
    }

    public void editarLibro() {
        listarLibros();
        if (libros.isEmpty()) return;

        System.out.print("Ingrese el índice del libro que desea editar: ");
        int indice = entrada.nextInt();
        entrada.nextLine(); 

        if (indice >= 0 && indice < libros.size()) {
            System.out.print("Ingrese el nuevo nombre del libro: ");
            String nuevoNombre = entrada.nextLine();
            libros.get(indice).setNombre(nuevoNombre);
            System.out.println("Libro editado correctamente.");
        } else {
            System.out.println("Índice inválido.");
        }
    }
}

public class BibliotecaApp {
    public static void main(String[] args) {
        Biblioteca biblioteca = new Biblioteca();
        biblioteca.mostrarMenu();
    }
}
