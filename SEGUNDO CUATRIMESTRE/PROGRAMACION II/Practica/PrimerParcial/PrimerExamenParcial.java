package Practica.PrimerParcial;

import java.util.Scanner;

class Persona {
    private String nombre, apellido;
    private int dni;

    public Persona(String nombre, String apellido, int dni) {
        this.nombre = nombre;
        this.apellido = apellido;
        this.dni = dni;
    }

    @Override
    public String toString() {
        return "- " + this.apellido + ", " + this.nombre + " (DNI: " + this.dni + ")";
    }
}

class Estudiantes extends Persona {
    private String carrera;

    public Estudiantes(String nombre, String apellido, int dni, String carrera) {
        super(nombre, apellido, dni);
        this.carrera = carrera;
    }

    public Estudiantes(String nombre, String apellido, int dni) {
        super(nombre, apellido, dni);
        this.carrera = "Sin definir";
    }

    public void modificarCarrera(String nuevaCarrera) {
        this.carrera = nuevaCarrera;
    }

    @Override
    public String toString() {
        return super.toString() + " - Carrera: " + this.carrera;
    }
}

class Materia {
    private String nombre;

    public Materia(String nombre) {
        this.nombre = nombre;
    }

    public String toString() {
        return "- " + this.nombre;
    }
}

interface InformeDeDatos {
    public String informe();
}

class Docentes extends Persona implements InformeDeDatos {
    private Materia[] materias;

    public Docentes(String nombre, String apellido, int dni, Materia[] materias) {
        super(nombre, apellido, dni);
        this.materias = materias;
    }

    @Override
    public String informe() {
        return "El docente " + super.toString() + " dicta las siguientes materias:";
    }

    public void mostrarMaterias() {
        for (Materia materia : materias) {
            System.out.println(materia.toString());
        }
    }

    @Override
    public String toString() {
        return super.toString();
    }
}

class Universidad {
    Estudiantes[] estudiantes = new Estudiantes[10];
    Docentes[] docentes = new Docentes[10];

    Scanner scanner = new Scanner(System.in);

    // ==============================
    // 1) REGISTRAR DOCENTE
    // ==============================
    public Docentes registrarDocente() {

        System.out.print("Ingrese el nombre del docente: ");
        String nombre = scanner.nextLine();

        System.out.print("Ingrese el apellido del docente: ");
        String apellido = scanner.nextLine();

        System.out.print("Ingrese el DNI del docente: ");
        int dni = scanner.nextInt();
        scanner.nextLine(); // limpiar buffer

        System.out.print("Ingrese la cantidad de materias que dicta: ");
        int cant = scanner.nextInt();
        scanner.nextLine();

        Materia[] materias = new Materia[cant];

        for (int i = 0; i < cant; i++) {
            System.out.print("Ingrese el nombre de la materia " + (i + 1) + ": ");
            String nombreMateria = scanner.nextLine();
            materias[i] = new Materia(nombreMateria);
        }

        return new Docentes(nombre, apellido, dni, materias);
    }

    // ==============================
    // 2) MOSTRAR INFORME (Docentes o cualquier InformeDeDatos)
    // ==============================
    public void mostrarInforme(InformeDeDatos objeto) {
        System.out.println(objeto.informe());

        if (objeto instanceof Docentes) {
            Docentes d = (Docentes) objeto;
            d.mostrarMaterias();
        }
    }

    // ==============================
    // 3) MOSTRAR ESTUDIANTES
    // ==============================
    public void mostrarEstudiantes(Estudiantes[] est) {

        System.out.println("\n=== LISTA DE ESTUDIANTES ===");

        boolean hay = false;

        for (Estudiantes e : est) {
            if (e != null) {
                System.out.println(e);
                hay = true;
            }
        }

        if (!hay) {
            System.out.println("No hay estudiantes registrados.");
        }
    }

    // Registrar estudiante (método interno)
    private Estudiantes registrarEstudiante() {

        System.out.print("Ingrese el nombre del estudiante: ");
        String nombre = scanner.nextLine();

        System.out.print("Ingrese el apellido del estudiante: ");
        String apellido = scanner.nextLine();

        System.out.print("Ingrese el DNI del estudiante: ");
        int dni = scanner.nextInt();
        scanner.nextLine(); // limpiar

        System.out.print("Ingrese la carrera (Enter para 'Sin definir'): ");
        String carrera = scanner.nextLine();

        if (carrera.trim().isEmpty()) {
            return new Estudiantes(nombre, apellido, dni);
        } else {
            return new Estudiantes(nombre, apellido, dni, carrera);
        }
    }

    // ==============================
    // 4) MENÚ PRINCIPAL
    // ==============================
    public void menuPrincipal() {
        int contadorEst = 0;
        int contadorDoc = 0;
        int opcion;

        do {
            System.out.println("\n=== MENÚ PRINCIPAL ===");
            System.out.println("1. Registrar estudiante");
            System.out.println("2. Registrar docente");
            System.out.println("3. Mostrar estudiantes");
            System.out.println("4. Mostrar informes de docentes");
            System.out.println("5. Salir");
            System.out.print("Seleccione una opción: ");

            opcion = scanner.nextInt();
            scanner.nextLine();

            switch (opcion) {

                case 1:
                    if (contadorEst < estudiantes.length) {
                        estudiantes[contadorEst] = registrarEstudiante();
                        contadorEst++;
                    }
                    break;

                case 2:
                    if (contadorDoc < docentes.length) {
                        docentes[contadorDoc] = registrarDocente();
                        contadorDoc++;
                    }
                    break;

                case 3:
                    mostrarEstudiantes(estudiantes);
                    break;

                case 4:
                    for (Docentes d : docentes) {
                        if (d != null) {
                            mostrarInforme(d);
                        }
                    }
                    break;

                case 5:
                    System.out.println("¡Chau!");
                    break;

                default:
                    System.out.println("Opción inválida.");
            }

        } while (opcion != 5);

    }
}

public class PrimerExamenParcial {
    public static void main(String[] args) {

        Universidad u = new Universidad();
        u.menuPrincipal();

    }
}