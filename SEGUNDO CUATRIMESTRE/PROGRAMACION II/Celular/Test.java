public class Test {
    public static void main(String[] args) {
        //Crear objeto
        Celular celular = new Celular();
        
        //Asignar variables
        celular.setMarca("Motorola");
        celular.setModelo("G60S");
        celular.setColor("Azul");
        
        //Usar métodos
        celular.Llamada("Gersom");
        celular.cortarLlamada();
        System.out.println();
        celular.informarCaracteristicas();
    }
}

