package com.testing.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import com.testing.model.Product;

public interface ProductRepository extends JpaRepository<Product, Long> {

}