package com.spring.demo.controller;

import com.spring.demo.model.Customer;
import com.spring.demo.service.CustomerService;
import org.springframework.web.bind.annotation.*;
import java.util.List;

@RestController
@RequestMapping("/customers")
public class CustomerController {
    private final CustomerService service;

    public CustomerController(CustomerService service) { 
        this.service = service; 
    }

    @GetMapping
    public List<Customer> getAll() { 
        return service.findAll(); 
    }

    @PostMapping
    public Customer create(@RequestBody Customer c) {
        return service.save(c); 
    }
}