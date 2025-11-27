package Practica.PrimerParcialModelo4;

import java.util.Scanner;

class Persona {
    protected String nombre;

    public Persona(String n) {
        this.nombre = n;
    }

    public String toString() {
        return nombre;
    }
}

class Vehiculo {
    private String modelo;

    public Vehiculo(String m) {
        this.modelo = m;
    }

    public String toString() {
        return "- " + modelo;
    }
}

interface InformeDeDatos {
    public String informe();
}

class Mecanico extends Persona implements InformeDeDatos {
    private Vehiculo[] vehiculos;

    public Mecanico(String n, Vehiculo[] v) {
        super(n);
        this.vehiculos = v;
    }

    public String informe() {
        return "El mecánico " + nombre + " está reparando:";
    }

    public void mostrarVehiculos() {
        for (Vehiculo v : vehiculos) {
            System.out.println(v.toString());
        }
    }
}

class Taller {
    Scanner sc = new Scanner(System.in);
    Mecanico[] mecanicos = new Mecanico[10];

    public Mecanico registrarMecanico() {
        System.out.print("Nombre del mecánico: ");
        String n = sc.nextLine();

        System.out.print("Cantidad de vehículos: ");
        int cant = sc.nextInt();
        sc.nextLine();

        Vehiculo[] vehs = new Vehiculo[cant];

        for (int i = 0; i < cant; i++) {
            System.out.print("Modelo del vehículo " + (i + 1) + ": ");
            vehs[i] = new Vehiculo(sc.nextLine());
        }

        return new Mecanico(n, vehs);
    }

    public void mostrarInforme(InformeDeDatos obj) {
        System.out.println(obj.informe());
        if (obj instanceof Mecanico)
            ((Mecanico) obj).mostrarVehiculos();
    }

    public void menu() {
        int op, cm = 0;

        do {
            System.out.println("\n1. Registrar mecánico");
            System.out.println("2. Mostrar informes");
            System.out.println("3. Salir");
            System.out.print("Opción: ");
            op = sc.nextInt();
            sc.nextLine();

            switch (op) {
                case 1:
                    mecanicos[cm++] = registrarMecanico();
                    break;

                case 2:
                    for (Mecanico m : mecanicos)
                        if (m != null)
                            mostrarInforme(m);
                    break;
            }
        } while (op != 3);
    }
}

public class SistemaTaller {
    public static void main(String[] args) {
        new Taller().menu();
    }
}