import java.util.concurrent.locks.*;
import java.util.concurrent.*;

public class Ejercicio8 {
    static class Resource {
        final ReentrantLock lock = new ReentrantLock();
    }

    public static void main(String[] args) throws InterruptedException {
        Resource r1 = new Resource();
        Resource r2 = new Resource();

        Runnable rA = () -> transfer(r1, r2);
        Runnable rB = () -> transfer(r2, r1);

        Thread t1 = new Thread(rA, "T-A");
        Thread t2 = new Thread(rB, "T-B");
        t1.start(); t2.start();
        t1.join(); t2.join();
        System.out.println("Terminado");
    }

    static void transfer(Resource a, Resource b) {
        boolean success = false;
        for (int i=0;i<3 && !success;i++) {
            try {
                if (a.lock.tryLock(300, TimeUnit.MILLISECONDS)) {
                    try {
                        System.out.println(Thread.currentThread().getName() + " agarró a");
                        if (b.lock.tryLock(300, TimeUnit.MILLISECONDS)) {
                            try {
                                System.out.println(Thread.currentThread().getName() + " agarró b -> trabajo hecho");
                                success = true;
                            } finally {
                                b.lock.unlock();
                            }
                        } else {
                            System.out.println(Thread.currentThread().getName() + " no pudo agarrar b, liberando a y reintentando");
                        }
                    } finally {
                        a.lock.unlock();
                    }
                }
                Thread.sleep(50); // backoff
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                return;
            }
        }
        if (!success) System.out.println(Thread.currentThread().getName() + " falló en transferir por deadlock avoidance");
    }
}

