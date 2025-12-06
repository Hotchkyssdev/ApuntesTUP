import java.util.concurrent.*;

public class Ejercicio4 {
    public static void main(String[] args) {
        CompletableFuture<String> f1 = CompletableFuture.supplyAsync(() -> {
            sleep(300);
            return "Hello";
        });

        CompletableFuture<String> f2 = CompletableFuture.supplyAsync(() -> {
            sleep(200);
            return "World";
        });

        CompletableFuture<String> combined = f1.thenCombine(f2, (a, b) -> a + " " + b)
            .thenApply(String::toUpperCase)
            .exceptionally(ex -> {
                System.err.println("Error en CF: " + ex.getMessage());
                return "DEFAULT";
            });

        System.out.println("Resultado final: " + combined.join()); // join no lanza checked exceptions
    }

    private static void sleep(long ms) {
        try { Thread.sleep(ms); } catch (InterruptedException e) { Thread.currentThread().interrupt(); }
    }
}
