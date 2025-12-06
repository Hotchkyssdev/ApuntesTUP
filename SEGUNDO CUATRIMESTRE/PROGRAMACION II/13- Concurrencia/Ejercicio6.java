import java.util.concurrent.*;
import java.util.concurrent.atomic.AtomicInteger;

public class Ejercicio6 {
    private static int syncCounter = 0;
    private static final AtomicInteger atomicCounter = new AtomicInteger(0);

    public static synchronized void incSync() {
        syncCounter++;
    }

    public static void main(String[] args) throws InterruptedException {
        ExecutorService pool = Executors.newFixedThreadPool(10);
        int tasks = 1000;

        for (int i = 0; i < tasks; i++) {
            pool.submit(() -> {
                incSync();
                atomicCounter.incrementAndGet();
            });
        }
        pool.shutdown();
        pool.awaitTermination(5, TimeUnit.SECONDS);

        System.out.println("syncCounter = " + syncCounter);
        System.out.println("atomicCounter = " + atomicCounter.get());
    }
}
