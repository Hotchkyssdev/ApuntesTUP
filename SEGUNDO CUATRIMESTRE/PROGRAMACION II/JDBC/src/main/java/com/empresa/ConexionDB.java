package com.empresa;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConexionDB {

    private static final String URL = "jdbc:sqlserver://DESKTOP-9544MJ9\\SQLEXPRESS;databaseName=EmpresaJDBC;encrypt=false;";
    private static final String USER = "sa";
    private static final String PASS = "MiPassword123";

    public static Connection getConnection() {
        Connection conn = null;
        try {
            conn = DriverManager.getConnection(URL, USER, PASS);
            System.out.println("Conectado correctamente a SQL Server");
        } catch (SQLException e) {
            System.out.println("Error al conectar: " + e.getMessage());
        }
        return conn;
    }
}