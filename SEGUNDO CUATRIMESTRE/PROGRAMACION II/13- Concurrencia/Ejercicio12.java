import java.util.concurrent.*;

public class Ejercicio12 {
    public static void main(String[] args) throws InterruptedException, BrokenBarrierException {
        int workers = 5;
        CountDownLatch startLatch = new CountDownLatch(1);
        CyclicBarrier endBarrier = new CyclicBarrier(workers + 1);

        ExecutorService pool = Executors.newFixedThreadPool(workers);
        for (int i=0;i<workers;i++) {
            final int id = i;
            pool.submit(() -> {
                try {
                    startLatch.await(); // esperar señal de inicio
                    System.out.println("Worker " + id + " ejecutando");
                    Thread.sleep(100 + id*50);
                    System.out.println("Worker " + id + " terminado");
                    endBarrier.await(); // indicar terminado
                } catch (InterruptedException | BrokenBarrierException e) {
                    Thread.currentThread().interrupt();
                }
            });
        }

        System.out.println("Preparado... en 1s arranco todo");
        Thread.sleep(1000);
        startLatch.countDown(); // arranca todos a la vez
        endBarrier.await(); // esperar a que todos terminen
        System.out.println("Todos los workers terminaron");
        pool.shutdown();
    }
}