package com.spring.demo;

import com.spring.demo.model.Customer;
import com.spring.demo.repository.CustomerRepository;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.autoconfigure.orm.jpa.DataJpaTest;
import static org.assertj.core.api.Assertions.assertThat;

@DataJpaTest
class CustomerServiceTest {

    @Autowired
    private CustomerRepository repo;

    @Test
    void saveAndFind() {
        Customer c = repo.save(new Customer(null, "Juan", "Perez"));
        
        assertThat(c.getId()).isNotNull(); 
        assertThat(c.getFirstName()).isEqualTo("Juan");
        
        Customer found = repo.findById(c.getId()).orElse(null);
        assertThat(found).isNotNull();
        assertThat(found.getLastName()).isEqualTo("Perez");
    }
}