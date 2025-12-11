package com.testing.order;
public class OrderService {
    public void placeOrder(String product, int qty, int stock) {
        if (qty > stock) throw new IllegalArgumentException("stock insuficiente");
        // else procesar
    }
}