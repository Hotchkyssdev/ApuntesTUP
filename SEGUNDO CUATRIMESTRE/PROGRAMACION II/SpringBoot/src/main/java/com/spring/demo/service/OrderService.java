package com.spring.demo.service;

import com.spring.demo.model.Order;
import com.spring.demo.repository.OrderRepository;
import org.springframework.stereotype.Service;

@Service
public class OrderService {

    private final OrderRepository repo;

    public OrderService(OrderRepository repo) {
        this.repo = repo;
    }

    public Order createOrder(String description) {
        Order order = new Order(description);
        return repo.save(order);
    }
}

