package com.testing;
import org.junit.jupiter.api.Test;
import com.testing.order.OrderService;
import static org.junit.jupiter.api.Assertions.*;
import static org.assertj.core.api.Assertions.*;

class OrderServiceTest {
    private final OrderService svc = new OrderService();

    @Test
    void lanzaCuandoNoHayStock() {
        IllegalArgumentException ex = assertThrows(IllegalArgumentException.class, () -> svc.placeOrder("X", 10, 5));
        assertThat(ex).hasMessageContaining("stock insuficiente");
    }
}