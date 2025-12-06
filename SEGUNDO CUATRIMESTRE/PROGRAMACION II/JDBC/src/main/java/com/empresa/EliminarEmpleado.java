package com.empresa;
import java.sql.*;
import java.util.Scanner;

public class EliminarEmpleado {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("ID a eliminar: ");
            int id = sc.nextInt();

            String sql = "DELETE FROM Empleado WHERE id = ?";

            try (Connection con = ConexionDB.getConnection();
                 PreparedStatement ps = con.prepareStatement(sql)) {

                ps.setInt(1, id);

                int filas = ps.executeUpdate();
                System.out.println("Registros eliminados: " + filas);

            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }
}

