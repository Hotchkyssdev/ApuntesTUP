package com.testing;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

class CalculadoraTest {

    private final Calculadora calc = new Calculadora();

    @Test
    void sumaSimple() {
        assertEquals(5, calc.sumar(2, 3));
        assertEquals(0, calc.sumar(-2, 2));
    }

    @Test
    void divisionExitosa() {
        assertEquals(2, calc.dividir(6, 3));
    }

    @Test
    void divisionPorCeroLanza() {
        assertThrows(ArithmeticException.class, () -> calc.dividir(5, 0));
    }
}