package Practica.PrimerParcialModelo2;

import java.util.Scanner;

class Persona {
    protected String nombre;
    protected String apellido;
    protected int dni;

    public Persona(String nombre, String apellido, int dni) {
        this.nombre = nombre;
        this.apellido = apellido;
        this.dni = dni;
    }

    @Override
    public String toString() {
        return apellido + ", " + nombre + " (DNI: " + dni + ")";
    }
}

class Paciente extends Persona {
    private String obraSocial;

    public Paciente(String nombre, String apellido, int dni, String obraSocial) {
        super(nombre, apellido, dni);
        this.obraSocial = obraSocial;
    }

    @Override
    public String toString() {
        return super.toString() + " - Obra Social: " + obraSocial;
    }
}

class Especialidad {
    private String nombre;

    public Especialidad(String nombre) {
        this.nombre = nombre;
    }

    public String toString() {
        return "- " + nombre;
    }
}

interface InformeDeDatos {
    public String informe();
}

class Medico extends Persona implements InformeDeDatos {
    private Especialidad[] especialidades;

    public Medico(String nombre, String apellido, int dni, Especialidad[] esp) {
        super(nombre, apellido, dni);
        this.especialidades = esp;
    }

    @Override
    public String informe() {
        return "El médico " + super.toString() + " está especializado en:";
    }

    public void mostrarEspecialidades() {
        for (Especialidad e : especialidades) {
            System.out.println(e.toString());
        }
    }
}

class Hospital {
    Paciente[] pacientes = new Paciente[10];
    Medico[] medicos = new Medico[10];

    Scanner scanner = new Scanner(System.in);

    public Medico registrarMedico() {
        System.out.print("Nombre: ");
        String nombre = scanner.nextLine();

        System.out.print("Apellido: ");
        String apellido = scanner.nextLine();

        System.out.print("DNI: ");
        int dni = scanner.nextInt();
        scanner.nextLine();

        System.out.print("Cantidad de especialidades: ");
        int cant = scanner.nextInt();
        scanner.nextLine();

        Especialidad[] esp = new Especialidad[cant];

        for (int i = 0; i < cant; i++) {
            System.out.print("Especialidad " + (i + 1) + ": ");
            esp[i] = new Especialidad(scanner.nextLine());
        }

        return new Medico(nombre, apellido, dni, esp);
    }

    public void mostrarInforme(InformeDeDatos obj) {
        System.out.println(obj.informe());

        if (obj instanceof Medico) {
            ((Medico) obj).mostrarEspecialidades();
        }
    }

    public void menu() {
        int op, cm = 0;

        do {
            System.out.println("\n1. Registrar médico");
            System.out.println("2. Mostrar informes de médicos");
            System.out.println("3. Salir");
            System.out.print("Opción: ");
            op = scanner.nextInt();
            scanner.nextLine();

            switch (op) {
                case 1:
                    medicos[cm++] = registrarMedico();
                    break;
                case 2:
                    for (Medico m : medicos) {
                        if (m != null)
                            mostrarInforme(m);
                    }
                    break;
            }
        } while (op != 3);
    }
}

public class SistemaHospital {
    public static void main(String[] args) {
        new Hospital().menu();
    }
}