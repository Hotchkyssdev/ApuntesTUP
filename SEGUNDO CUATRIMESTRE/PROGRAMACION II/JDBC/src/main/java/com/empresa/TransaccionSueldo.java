package com.empresa;
import java.sql.*;

public class TransaccionSueldo {
    public static void main(String[] args) {

        String select = "SELECT edad, salario FROM Empleado WHERE id = ?";
        String update = "UPDATE Empleado SET salario = salario + ? WHERE id = ?";

        try (Connection con = ConexionDB.getConnection()) {

            con.setAutoCommit(false); // Comienza transacción

            int id = 1;  // probar con un id existente
            double aumento = 5000;

            PreparedStatement psSelect = con.prepareStatement(select);
            psSelect.setInt(1, id);
            ResultSet rs = psSelect.executeQuery();

            if (rs.next()) {
                int edad = rs.getInt("edad");

                if (edad > 30) {
                    PreparedStatement psUpdate = con.prepareStatement(update);
                    psUpdate.setDouble(1, aumento);
                    psUpdate.setInt(2, id);
                    psUpdate.executeUpdate();

                    con.commit();
                    System.out.println("Aumento realizado");
                } else {
                    con.rollback();
                    System.out.println("No cumple edad, NO se actualiza");
                }
            }

        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}