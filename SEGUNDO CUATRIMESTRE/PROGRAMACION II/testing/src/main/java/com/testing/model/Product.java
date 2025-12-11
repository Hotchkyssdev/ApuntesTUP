package com.testing.model;

import jakarta.persistence.*;

@Entity
public class Product {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    private String name;

    public Product() {

    }

    public Product(Long id, String name) { 
        this.id = id; this.name = name; 
    }

    public Long getId() { 
        return id; 
    }

    public String getName() { 
        return name; 
    }
}