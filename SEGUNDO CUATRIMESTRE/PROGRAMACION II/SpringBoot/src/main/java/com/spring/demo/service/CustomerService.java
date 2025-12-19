package com.spring.demo.service;

import com.spring.demo.model.Customer;
import com.spring.demo.repository.CustomerRepository;
import org.springframework.stereotype.Service;
import java.util.List;

@Service
public class CustomerService {
    private final CustomerRepository repo;

    public CustomerService(CustomerRepository repo) { 
        this.repo = repo; 
    }

    public List<Customer> findAll() { 
        return repo.findAll(); 
    }

    public Customer save(Customer c) { 
        return repo.save(c); 
    }
}