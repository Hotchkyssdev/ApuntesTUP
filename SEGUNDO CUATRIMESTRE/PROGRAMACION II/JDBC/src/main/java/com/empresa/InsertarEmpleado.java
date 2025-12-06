package com.empresa;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class InsertarEmpleado {
    public static void main(String[] args) {
        String sql = "INSERT INTO Empleado (nombre,apellido,edad,salario) VALUES (?,?,?,?)";
        try (Connection con = ConexionDB.getConnection();
             PreparedStatement ps = con.prepareStatement(sql)) {

            ps.setString(1, "Gersom");
            ps.setString(2, "Hotchkyss");
            ps.setInt(3, 19);
            ps.setDouble(4, 120000);

            int fila = ps.executeUpdate();
            System.out.println("Filas insertadas: " + fila);

        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}