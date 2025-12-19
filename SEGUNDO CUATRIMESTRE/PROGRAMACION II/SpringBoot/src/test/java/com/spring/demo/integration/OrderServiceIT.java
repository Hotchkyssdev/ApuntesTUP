package com.spring.demo.integration;

import com.spring.demo.model.Order;
import com.spring.demo.service.OrderService;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.context.ActiveProfiles;

import static org.assertj.core.api.Assertions.assertThat;

@SpringBootTest
@ActiveProfiles("test")
class OrderServiceIT {

    @Autowired
    OrderService service;

    @Test
    void createOrderWorks() {
        Order order = service.createOrder("Pedido de prueba");

        assertThat(order.getId()).isNotNull();
        assertThat(order.getDescription()).isEqualTo("Pedido de prueba");
    }
}

