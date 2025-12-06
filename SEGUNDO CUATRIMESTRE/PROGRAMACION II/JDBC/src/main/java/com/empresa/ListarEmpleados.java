package com.empresa;
import java.sql.*;

public class ListarEmpleados {
    public static void main(String[] args) {

        String sql = "SELECT * FROM Empleado";

        try (Connection con = ConexionDB.getConnection();
             Statement st = con.createStatement();
             ResultSet rs = st.executeQuery(sql)) {

            while (rs.next()) {
                System.out.println(
                        rs.getInt("id") + " - " +
                        rs.getString("nombre") + " " +
                        rs.getString("apellido") +
                        " | Edad: " + rs.getInt("edad") +
                        " | Salario: " + rs.getDouble("salario")
                );
            }

        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}

