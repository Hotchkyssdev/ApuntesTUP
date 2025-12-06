import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.nio.file.Path;

public class Ejercicio3 {
    public static void main(String[] args) {
        Path path = Path.of("datos.txt"); 
        int contador = 0;

        try (BufferedReader br = new BufferedReader(new FileReader(path.toFile()))) {
            String linea;
            while ((linea = br.readLine()) != null) {
                if (linea.contains("ERROR")) contador++;
            }
            System.out.println("Líneas que contienen 'ERROR': " + contador);
        } catch (IOException e) {
            System.err.println("Error leyendo el archivo: " + e.getMessage());
        }
    }
}

