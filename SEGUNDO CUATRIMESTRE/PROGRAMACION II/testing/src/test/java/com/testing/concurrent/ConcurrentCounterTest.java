package com.testing.concurrent;

import org.junit.jupiter.api.Test;
import java.util.concurrent.*;
import static org.assertj.core.api.Assertions.*;

class ConcurrentCounterTest {

    @Test
    void incrementsConcurrently() throws InterruptedException {
        ConcurrentCounter c = new ConcurrentCounter();
        int threads = 100;
        ExecutorService pool = Executors.newFixedThreadPool(threads);
        CountDownLatch start = new CountDownLatch(1);
        CountDownLatch done = new CountDownLatch(threads);

        for (int i=0;i<threads;i++) {
            pool.submit(() -> {
                try {
                    start.await();
                    c.inc();
                } catch (InterruptedException e) { Thread.currentThread().interrupt(); }
                done.countDown();
            });
        }

        start.countDown(); 
        done.await(5, TimeUnit.SECONDS);
        pool.shutdownNow();
        assertThat(c.get()).isEqualTo(threads);
    }
}