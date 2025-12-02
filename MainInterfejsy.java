interface Silnikowy {
    void przyspiesz();
}

interface Elektryczny {
    void ladowanie();
}

class Hybryda implements Silnikowy, Elektryczny {
    @Override
    public void ladowanie() {
        System.out.println("Ladowanie baterii");
    }

    @Override
    public void przyspiesz() {
        System.out.println("Hybryda przyspiesza");
    }
}

public class MainInterfejsy {
    public static void main(String[] args) {
        Hybryda h = new Hybryda();
        h.ladowanie();
        h.przyspiesz();
    }
}