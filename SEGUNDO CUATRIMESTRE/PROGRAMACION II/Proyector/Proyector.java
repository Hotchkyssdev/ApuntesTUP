import java.io.Serializable;
enum Rgb {RED, GREEN, BLUE}

public class Proyector implements Serializable {
    private String marca;
    private String tecnologia;
    private Rgb color;
    
    public void setMarca(String marca) {
        this.marca = marca;
    }    
    
    public String getMarca() {
        return this.marca;
    }
    
    public void setTecnologia(String tecnologia) {
        this.tecnologia = tecnologia;
    }
    
    public String getTecnologia() {
        return this.tecnologia;
    }
    
    public void setColor(Rgb color) {
        this.color = color;
    }
    
    public Rgb getColor() {
        return this.color;
    }
    
    public Proyector() {
    }
    
    public Proyector(String marca, String tecnologia, Rgb color) {
        this.marca = marca;
        this.tecnologia = tecnologia;
        this.color = color;
    }
    
    public void apagar() {
        System.out.println("Proyector apagado");
    }
}