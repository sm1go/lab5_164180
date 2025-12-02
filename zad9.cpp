#include <iostream>

class Pojazd {
public:
    void start() {
        std::cout << "Pojazd rusza" << std::endl;
    }
};

class Samochod : public Pojazd {
public:
    void trab() {
        std::cout << "Bip bip" << std::endl;
    }
};

class ElektrycznySamochod : public Samochod {
public:
    void przyspiesz() {
        std::cout << "Ciche przyspieszanie elektryka" << std::endl;
    }
};

int main() {
    ElektrycznySamochod es;
    es.start();
    es.trab();
    es.przyspiesz();
    return 0;
}