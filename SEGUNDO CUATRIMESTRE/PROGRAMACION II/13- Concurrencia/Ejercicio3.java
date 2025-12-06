import java.util.*;
import java.util.concurrent.*;

public class Ejercicio3 {
    public static void main(String[] args) throws InterruptedException, ExecutionException {
        ExecutorService pool = Executors.newFixedThreadPool(3);
        List<Future<Integer>> futures = new ArrayList<>();

        for (int i = 0; i < 5; i++) {
            futures.add(pool.submit(() -> {
                int v = (int)(Math.random()*100);
                Thread.sleep(200);
                return v;
            }));
        }

        for (Future<Integer> f : futures) {
            System.out.println("Resultado: " + f.get()); // bloquea hasta disponible
        }

        pool.shutdown();
    }
}
