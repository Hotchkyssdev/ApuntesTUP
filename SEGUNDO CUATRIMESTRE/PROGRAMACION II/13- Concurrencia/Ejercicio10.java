import java.util.concurrent.*;
import java.util.concurrent.atomic.AtomicInteger;

public class Ejercicio10 {
    public static void main(String[] args) throws InterruptedException {
        ScheduledExecutorService scheduler = Executors.newScheduledThreadPool(1);
        AtomicInteger counter = new AtomicInteger(0);

        ScheduledFuture<?> future = scheduler.scheduleAtFixedRate(() -> {
            int c = counter.incrementAndGet();
            System.out.println("Tick " + c + " from " + Thread.currentThread().getName());
        }, 0, 500, TimeUnit.MILLISECONDS);

        // dejar correr 3 segundos y luego cancelar
        Thread.sleep(3000);
        future.cancel(false);
        scheduler.shutdown();
        scheduler.awaitTermination(1, TimeUnit.SECONDS);
        System.out.println("Scheduler detenido");
    }
}
