import java.util.concurrent.*;

public class Ejercicio5 {
    public static void main(String[] args) throws InterruptedException {
        BlockingQueue<String> queue = new ArrayBlockingQueue<>(5);
        ExecutorService pool = Executors.newFixedThreadPool(4);

        // productores
        for (int p = 1; p <= 2; p++) {
            final int pid = p;
            pool.submit(() -> {
                for (int i = 1; i <= 10; i++) {
                    String item = "P" + pid + "-item" + i;
                    queue.offer(item);
                    System.out.println("Producido: " + item);
                }
            });
        }
        
        // consumidores
        for (int c = 1; c <= 2; c++) {
            pool.submit(() -> {
                try {
                    while (true) {
                        String item = queue.take();
                        System.out.println("Consumido por " + Thread.currentThread().getName() + ": " + item);
                        // condición de terminación opcional con poison pill, omitido en este ejemplo
                    }
                } catch (InterruptedException e) {
                    Thread.currentThread().interrupt();
                }
            });
        }

        // demo: dejar correr un tiempo y luego shutdownNow consumidores
        Thread.sleep(2000);
        pool.shutdownNow();
        pool.awaitTermination(1, TimeUnit.SECONDS);
        System.out.println("Fin del demo productor/consumidor.");
    }
}

