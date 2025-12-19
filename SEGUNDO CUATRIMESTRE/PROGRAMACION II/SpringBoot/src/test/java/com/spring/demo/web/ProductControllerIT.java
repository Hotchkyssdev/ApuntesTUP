package com.spring.demo.web;

import com.spring.demo.model.Product;
import com.spring.demo.repository.ProductRepository;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.autoconfigure.web.servlet.AutoConfigureMockMvc;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.web.servlet.MockMvc;

import static org.springframework.test.web.servlet.request.MockMvcRequestBuilders.get;
import static org.springframework.test.web.servlet.result.MockMvcResultMatchers.status;

@SpringBootTest
@AutoConfigureMockMvc
class ProductControllerIT {

    @Autowired
    MockMvc mockMvc;

    @Autowired
    ProductRepository repo;

    @Test
    void getProducts() throws Exception {
        repo.save(new Product("Mouse"));
        repo.save(new Product("Teclado"));

        mockMvc.perform(get("/api/products"))
               .andExpect(status().isOk());
    }
}