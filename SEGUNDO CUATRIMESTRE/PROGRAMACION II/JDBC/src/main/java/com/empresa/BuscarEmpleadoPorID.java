package com.empresa;
import java.sql.*;
import java.util.Scanner;

public class BuscarEmpleadoPorID {

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Ingrese ID: ");
            int idBuscado = sc.nextInt();

            String sql = "SELECT * FROM Empleado WHERE id = ?";

            try (Connection con = ConexionDB.getConnection();
                 PreparedStatement ps = con.prepareStatement(sql)) {

                ps.setInt(1, idBuscado);
                ResultSet rs = ps.executeQuery();

                if (rs.next()) {
                    System.out.println("Empleado encontrado: " +
                                       rs.getString("nombre") + " " +
                                       rs.getString("apellido"));
                } else {
                    System.out.println("No existe empleado con ese ID");
                }

            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }
}

