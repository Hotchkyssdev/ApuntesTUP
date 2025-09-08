public class Celular {
    private String marca;
    private String modelo;
    private String color;
    
    //Getters
    public String getMarca() {
        return marca;
    }
    public String getModelo() {
        return modelo;
    }
    public String getColor() {
        return color;
    }
    
    //Setters
    public void setMarca(String marca) {
        this.marca = marca;
    }
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
    public void setColor(String color) {
        this.color = color;
    }
    
    //Constructores
    public Celular() {
    }
    public Celular(String marca, String modelo, String color) {
        this.marca = marca;
        this.modelo = modelo;
        this.color = color;
    }
    
    //Métodos
    public void cortarLlamada() {
        System.out.println("Llamada Finalizada");
    }
    public void Llamada(String nombre) {
        System.out.println("Llamando a " + nombre);
    }
    public void informarCaracteristicas() {
        System.out.println("Celular Marca: " + marca);
        System.out.println("Celular Modelo: " + modelo);
        System.out.println("Celular Color: " + color);
    }
}
