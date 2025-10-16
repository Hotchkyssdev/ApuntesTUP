public class Test {
    public static void main(String[] args) {
        Caramelo caramelo = new Caramelo();
        Caramelo caramelo2 = new Caramelo("Acido", "Sugus");
        caramelo.setMarca("Arcor");
        caramelo.setGusto("Dulce");
        
        caramelo.envolver();
        caramelo.comprar();
        caramelo.recibir();
        caramelo.regalar();
        caramelo.comer();
        caramelo.tirarALaBasura();
        System.out.println();
        caramelo2.envolver();
        caramelo2.comprar();
        caramelo2.recibir();
        caramelo2.regalar();
        caramelo2.comer();
        caramelo2.tirarALaBasura();
    }
}