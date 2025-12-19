package com.spring.demo.integration;

import static org.assertj.core.api.Assertions.assertThat;

import java.util.Optional;

import org.junit.jupiter.api.Test;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.context.DynamicPropertyRegistry;
import org.springframework.test.context.DynamicPropertySource;
import org.testcontainers.containers.PostgreSQLContainer;
import org.testcontainers.junit.jupiter.Container;
import org.testcontainers.junit.jupiter.Testcontainers;

import com.spring.demo.model.Customer;
import com.spring.demo.repository.CustomerRepository;

@Testcontainers
@SpringBootTest
class CustomerRepositoryIT {

    @SuppressWarnings("resource")
    @Container
    static PostgreSQLContainer<?> pg = new PostgreSQLContainer<>("postgres:15")
            .withDatabaseName("testdb")
            .withUsername("user")
            .withPassword("pass");

    @DynamicPropertySource
    static void properties(DynamicPropertyRegistry registry) {
        registry.add("spring.datasource.url", pg::getJdbcUrl);
        registry.add("spring.datasource.username", pg::getUsername);
        registry.add("spring.datasource.password", pg::getPassword);
    }

    private final CustomerRepository repo;

    public CustomerRepositoryIT(CustomerRepository repo) {
        this.repo = repo;
    }

    @Test
    void saveAndFind() {
        Customer c = repo.save(new Customer(null, "Maria", "Lopez"));
        Optional<Customer> found = repo.findById(c.getId());
        
        assertThat(found).isPresent();
        assertThat(found.get().getFirstName()).isEqualTo("Maria");
    }
}