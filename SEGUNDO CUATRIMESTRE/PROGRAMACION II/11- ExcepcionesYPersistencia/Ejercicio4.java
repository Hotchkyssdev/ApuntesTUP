import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class Ejercicio4 {
    public static void main(String[] args) {
        DateTimeFormatter fmt = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        try (PrintWriter pw = new PrintWriter(new FileWriter("reporte.txt"))) {
            for (int i = 1; i <= 100; i++) {
                pw.printf("Registro %03d: %s%n", i, LocalDateTime.now().format(fmt));
            }
            System.out.println("Reporte generado: reporte.txt");
        } catch (IOException e) {
            System.err.println("No se pudo escribir el reporte: " + e.getMessage());
        }
    }
}
