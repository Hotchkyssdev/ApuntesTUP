package com.testing.concurrent;
import java.util.concurrent.atomic.AtomicInteger;

public class ConcurrentCounter {
    private final AtomicInteger counter = new AtomicInteger(0);

    public void inc() { 
        counter.incrementAndGet(); 
    }

    public int get() { 
        return counter.get(); 
    }
}