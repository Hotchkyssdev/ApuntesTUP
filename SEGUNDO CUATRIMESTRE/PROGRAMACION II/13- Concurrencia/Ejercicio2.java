import java.util.concurrent.*;

public class Ejercicio2 {
    public static void main(String[] args) throws InterruptedException {
        ExecutorService pool = Executors.newFixedThreadPool(3);

        for (int i = 1; i <= 10; i++) {
            final int id = i;
            pool.submit(() -> {
                System.out.println("Tarea " + id + " ejecutada por " + Thread.currentThread().getName());
                try { Thread.sleep(200); } catch (InterruptedException e) { Thread.currentThread().interrupt(); }
            });
        }

        pool.shutdown();
        if (!pool.awaitTermination(5, TimeUnit.SECONDS)) {
            System.out.println("Forzando shutdown...");
            pool.shutdownNow();
        } else {
            System.out.println("Todas las tareas completadas.");
        }
    }
}