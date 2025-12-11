package com.testing.spring; 

import org.junit.jupiter.api.*; 
import org.springframework.boot.test.context.SpringBootTest; 
import org.springframework.beans.factory.annotation.Autowired; 
import org.testcontainers.containers.PostgreSQLContainer; 
import org.testcontainers.junit.jupiter.Testcontainers; 
import org.testcontainers.junit.jupiter.Container; 
import org.springframework.test.context.DynamicPropertySource; 
import org.springframework.test.context.DynamicPropertyRegistry; 
import com.testing.repository.ProductRepository; 
import com.testing.model.Product; 

@Testcontainers 
@SpringBootTest 
class ProductRepositoryIT2 { 
    
    @Container static PostgreSQLContainer<?> pg = 
        new PostgreSQLContainer<>("postgres:15-alpine") 
            .withDatabaseName("testdb") 
            .withUsername("user") 
            .withPassword("pass") 
            .withEnv("TZ", "UTC");
            
    @DynamicPropertySource static void props(DynamicPropertyRegistry registry) { 
        registry.add("spring.datasource.url", pg::getJdbcUrl); 
        registry.add("spring.datasource.username", pg::getUsername); 
        registry.add("spring.datasource.password", pg::getPassword); 
        registry.add("spring.jpa.hibernate.ddl-auto", () -> "create-drop"); 
        registry.add("spring.jpa.properties.hibernate.dialect", () -> "org.hibernate.dialect.PostgreSQLDialect");
        registry.add("spring.jpa.properties.hibernate.jdbc.time_zone", () -> "UTC"); 
    } 
    
    @Autowired ProductRepository repo; 
    @Test void saveAndFind() { 
        Product p = repo.save(new Product(null, "X")); 
        Assertions.assertTrue(repo.findById(p.getId()).isPresent()); 
    } 
}