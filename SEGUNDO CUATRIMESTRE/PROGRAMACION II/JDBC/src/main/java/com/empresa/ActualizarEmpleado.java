package com.empresa;
import java.sql.*;
import java.util.Scanner;

public class ActualizarEmpleado {

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Ingrese ID del empleado a modificar: ");
            int id = sc.nextInt();

            sc.nextLine();
            System.out.print("Nuevo nombre: ");
            String nombre = sc.nextLine();

            String sql = "UPDATE Empleado SET nombre = ? WHERE id = ?";

            try (Connection con = ConexionDB.getConnection();
                 PreparedStatement ps = con.prepareStatement(sql)) {

                ps.setString(1, nombre);
                ps.setInt(2, id);

                int filas = ps.executeUpdate();
                System.out.println("Registro actualizado: " + filas);

            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }
}

