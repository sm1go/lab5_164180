abstract class Pojazd {
    abstract void przyspiesz();

    void zatrzymaj() {
        System.out.println("Pojazd zatrzymany");
    }
}
class Samochod extends Pojazd {
    @Override
    void przyspiesz() {
        System.out.println("Samochod przyspiesza do 100 km/h");
    }
}

class Rower extends Pojazd {
    @Override
    void przyspiesz() {
        System.out.println("Rower przyspiesza pedalujac");
    }
}


public class Main {
    public static void main(String[] args) {
        Pojazd p1 = new Samochod();
        Pojazd p2 = new Rower();

        p1.przyspiesz();
        p1.zatrzymaj();
        
        p2.przyspiesz();
        p2.zatrzymaj();
    }
}