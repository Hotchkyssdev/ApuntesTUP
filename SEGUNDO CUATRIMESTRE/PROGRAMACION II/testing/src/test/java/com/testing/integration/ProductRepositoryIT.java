package com.testing.integration;

import org.junit.jupiter.api.*;
import org.testcontainers.containers.PostgreSQLContainer;
import org.testcontainers.junit.jupiter.Testcontainers;

import java.sql.*;

import static org.assertj.core.api.Assertions.*;

@Testcontainers
class ProductRepositoryIT {

    static PostgreSQLContainer<?> postgres =
        new PostgreSQLContainer<>("postgres:15-alpine")
            .withDatabaseName("testdb")
            .withUsername("user")
            .withPassword("pass")
            .withCommand("-c TimeZone=America/Argentina/Buenos_Aires");

    @BeforeAll
    static void start() { 
        postgres.start(); 
    }

    @AfterAll
    static void stop() { 
        postgres.stop(); 
    }

    @Test
    void insertarYLeerProducto() throws Exception {

        String url = postgres.getJdbcUrl();

        try (Connection conn = DriverManager.getConnection(url, postgres.getUsername(), postgres.getPassword())) {

            try (Statement st = conn.createStatement()) {
                st.execute("CREATE TABLE product (id serial PRIMARY KEY, name text NOT NULL)");
                st.executeUpdate("INSERT INTO product (name) VALUES ('Telefono')");
            }

            try (Statement st = conn.createStatement();
                 ResultSet rs = st.executeQuery("SELECT count(*) FROM product")) {

                rs.next();
                int cnt = rs.getInt(1);
                assertThat(cnt).isEqualTo(1);
            }
        }
    }
}