class Pojazd {
    void start() {
        System.out.println("Pojazd rusza");
    }
}

class Samochod extends Pojazd {
    void trab() {
        System.out.println("Bip bip");
    }
}

class ElektrycznySamochod extends Samochod {
    void przyspiesz() {
        System.out.println("Ciche przyspieszanie elektryka");
    }
}

public class MainWielopoziomowe {
    public static void main(String[] args) {
        ElektrycznySamochod es = new ElektrycznySamochod();
        es.start();
        es.trab();
        es.przyspiesz();
    }
}