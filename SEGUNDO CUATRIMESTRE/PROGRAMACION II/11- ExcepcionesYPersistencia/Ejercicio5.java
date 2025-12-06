import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class Ejercicio5 {
    public static void copyFile(Path src, Path dest) throws IOException {
        try (BufferedInputStream in = new BufferedInputStream(Files.newInputStream(src));
             BufferedOutputStream out = new BufferedOutputStream(Files.newOutputStream(dest))) {
            byte[] buffer = new byte[8192];
            int read;
            long total = 0;
            while ((read = in.read(buffer)) != -1) {
                out.write(buffer, 0, read);
                total += read;
            }
            out.flush();
            System.out.println("Copiado: " + total + " bytes");
        }
    }

    public static void main(String[] args) {
        try {
            Path src = Path.of("imagen_origen.jpg");
            Path dest = Path.of("imagen_copia.jpg");
            copyFile(src, dest);
        } catch (IOException e) {
            System.err.println("Error copia: " + e.getMessage());
        }
    }
}