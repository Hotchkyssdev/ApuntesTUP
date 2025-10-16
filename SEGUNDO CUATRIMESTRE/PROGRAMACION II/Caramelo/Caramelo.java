import java.io.Serializable;

public class Caramelo implements Serializable {
    private String gusto;
    private String marca;
    
    public String getGusto() {
        return gusto;
    }
    
    public String getMarca() {
        return marca;
    }
    
    public void setGusto(String gusto) {
        this.gusto = gusto;
    }
    
    public void setMarca(String marca) {
        this.marca = marca;
    }
    
    public Caramelo() {
    }
    
    public Caramelo(String gusto, String marca) {
        this.gusto = gusto;
        this.marca = marca;
    }
    
    public void envolver() {
        System.out.println("Envolviendo caramelo con gusto " + gusto + " de la marca " + marca);
    }
    
    public void comer() {
        System.out.println("El caramelo con gusto " + gusto + " fue comido");
    }
    
    public void tirarALaBasura() {
        System.out.println("El caramelo fue tirado a la basura");
    }
    
    public void regalar() {
        System.out.println("El caramelo con gusto " + gusto + " fue regalado");
    }
    
    public void recibir() {
        System.out.println("El caramelo " + marca + " fue recibido por otra persona");
    }
    
    public void comprar() {
        System.out.println("Se compro un caramelo de gusto " + gusto + " de la marca " + marca);
    }
}