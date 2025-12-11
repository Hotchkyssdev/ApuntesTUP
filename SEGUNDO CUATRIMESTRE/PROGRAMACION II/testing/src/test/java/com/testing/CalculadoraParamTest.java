package com.testing;

import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.CsvSource;
import static org.junit.jupiter.api.Assertions.*;

class CalculadoraParamTest {

    private final Calculadora calc = new Calculadora();

    @ParameterizedTest
    @CsvSource({
        "1,2,3",
        "0,0,0",
        "-1,1,0",
        "100,200,300"
    })
    void sumaParametros(int a, int b, int esperado) {
        assertEquals(esperado, calc.sumar(a,b));
    }
}