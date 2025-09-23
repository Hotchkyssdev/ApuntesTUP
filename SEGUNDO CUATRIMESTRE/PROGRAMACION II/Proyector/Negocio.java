public class Negocio {
    public static void main(String[] args) {
        Proyector p = new Proyector();
        p.setMarca("Epson");
        p.setTecnologia("3LCD");
        p.setColor(Rgb.BLUE);
        System.out.println("Marca: " + p.getMarca());
        System.out.println("Tecnologia: " + p.getTecnologia());
        System.out.println("Color: " + p.getColor());
        p.apagar();
    }
}