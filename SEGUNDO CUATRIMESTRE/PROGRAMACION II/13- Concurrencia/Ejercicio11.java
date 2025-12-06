import java.util.concurrent.*;
import java.util.*;

public class Ejercicio11 {
    public static void main(String[] args) throws InterruptedException {
        ConcurrentHashMap<String, Integer> counts = new ConcurrentHashMap<>();
        CopyOnWriteArrayList<String> list = new CopyOnWriteArrayList<>();

        ExecutorService pool = Executors.newFixedThreadPool(8);

        // actualizar mapa concurrente
        for (int i=0;i<1000;i++) {
            final int id = i;
            pool.submit(() -> counts.merge("key" + (id%10), 1, Integer::sum));
        }

        // escribir en CopyOnWriteList ocasionalmente, leer frecuentemente
        pool.submit(() -> {
            for (int i=0;i<5;i++) {
                list.add("val" + i);
                try { Thread.sleep(100); } catch (InterruptedException e) { Thread.currentThread().interrupt(); }
            }
        });
        for (int i=0;i<10;i++) {
            pool.submit(() -> {
                for (String s : list) {
                    // lectura segura sin bloqueo
                }
            });
        }

        pool.shutdown();
        pool.awaitTermination(2, TimeUnit.SECONDS);
        System.out.println("Counts: " + counts);
        System.out.println("List size: " + list.size());
    }
}