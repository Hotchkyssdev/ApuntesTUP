public class Ejercicio1 {
    public static void main(String[] args) throws InterruptedException {
        Runnable task = () -> {
            String name = Thread.currentThread().getName();
            System.out.println(name + " iniciando.");
            try { Thread.sleep((long)(Math.random()*1000)); }
            catch (InterruptedException e) { Thread.currentThread().interrupt(); }
            System.out.println(name + " terminado.");
        };

        Thread t1 = new Thread(task, "Hilo-1");
        Thread t2 = new Thread(task, "Hilo-2");
        Thread t3 = new Thread(task, "Hilo-3");

        t1.start(); 
        t2.start(); 
        t3.start();

        // esperar a que terminen
        t1.join(); 
        t2.join(); 
        t3.join();
        System.out.println("Todos los hilos finalizaron.");
    }
}