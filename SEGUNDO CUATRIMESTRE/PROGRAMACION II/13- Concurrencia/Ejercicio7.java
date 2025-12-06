import java.util.concurrent.locks.*;
import java.util.*;
import java.util.concurrent.*;

public class Ejercicio7 {
    static class SharedData {
        private final Map<String, String> map = new HashMap<>();
        private final ReadWriteLock rw = new ReentrantReadWriteLock();

        public String read(String key) {
            rw.readLock().lock();
            try {
                return map.get(key);
            } finally {
                rw.readLock().unlock();
            }
        }

        public void write(String key, String val) {
            rw.writeLock().lock();
            try {
                map.put(key, val);
            } finally {
                rw.writeLock().unlock();
            }
        }
    }

    public static void main(String[] args) throws InterruptedException {
        SharedData sd = new SharedData();
        sd.write("x", "0");

        ExecutorService pool = Executors.newFixedThreadPool(5);
        // muchos lectores
        for (int i=0;i<10;i++) {
            pool.submit(() -> {
                System.out.println("Lectura: " + sd.read("x"));
                try { Thread.sleep(50); } catch (InterruptedException e) { Thread.currentThread().interrupt(); }
            });
        }
        // un escritor
        pool.submit(() -> {
            sd.write("x", "1");
            System.out.println("Escritor: actualizado x a 1");
        });

        pool.shutdown();
        pool.awaitTermination(2, TimeUnit.SECONDS);
    }
}
