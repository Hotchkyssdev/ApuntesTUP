package com.testing;

public class Calculadora {
    public int sumar(int a, int b) {
        return a + b;
    }

    public int dividir(int a, int b) {
        return a / b; // lanzará ArithmeticException si b == 0
    }
}
