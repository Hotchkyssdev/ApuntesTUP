import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Ejercicio6 {
    public static void main(String[] args) {
        Path path = Path.of("logs.txt");
        try (Stream<String> lines = Files.lines(path)) {
            Map<String, Long> freq = lines
                .flatMap(l -> Arrays.stream(l.split("\\W+")))
                .filter(s -> !s.isBlank())
                .map(String::toLowerCase)
                .collect(Collectors.groupingBy(w -> w, Collectors.counting()));

            freq.entrySet().stream()
                .sorted(Map.Entry.<String, Long>comparingByValue(Comparator.reverseOrder()))
                .limit(10)
                .forEach(e -> System.out.println(e.getKey() + " -> " + e.getValue()));
        } catch (IOException e) {
            System.err.println("No se pudo leer logs.txt: " + e.getMessage());
        }
    }
}