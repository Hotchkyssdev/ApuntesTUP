import java.io.*;
import java.util.ArrayList;
import java.util.List;

public class Ejercicio7 {

    public static class Empleado implements Serializable {
        private static final long serialVersionUID = 1L;
        private int id;
        private String nombre;
        private transient String password; // no se serializa

        public Empleado(int id, String nombre, String password) {
            this.id = id;
            this.nombre = nombre;
            this.password = password;
        }

        @Override
        public String toString() {
            return "Empleado{" + "id=" + id + ", nombre='" + nombre + '\'' + ", password='" + password + '\'' + '}';
        }
    }

    public static void guardar(List<Empleado> lista, String file) throws IOException {
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(file))) {
            oos.writeObject(lista);
        }
    }

    public static List<Empleado> cargar(String file) throws IOException, ClassNotFoundException {
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(file))) {
            return (List<Empleado>) ois.readObject();
        }
    }
    
    public static void main(String[] args) {
        try {
            List<Empleado> empleados = new ArrayList<>();
            empleados.add(new Empleado(1, "Ana", "secreto1"));
            empleados.add(new Empleado(2, "Luis", "secreto2"));

            String file = "empleados.ser";
            guardar(empleados, file);
            System.out.println("Guardados.");

            List<Empleado> cargados = cargar(file);
            System.out.println("Cargados: " + cargados);
            // Observá que password estará null por ser transient
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
