#include <iostream>

class Pojazd {
public:
    virtual void przyspiesz() = 0;
    void zatrzymaj() {
        std::cout << "Pojazd zatrzymany" << std::endl;
    }
};

class Samochod : public Pojazd {
public:
    void przyspiesz() override {
        std::cout << "Samochod przyspiesza do 100 km/h" << std::endl;
    }
};

class Rower : public Pojazd {
public:
    void przyspiesz() override {
        std::cout << "Rower przyspiesza pedalujac" << std::endl;
    }
};

int main() {
    Pojazd* p1 = new Samochod();
    Pojazd* p2 = new Rower();

    p1->przyspiesz();
    p1->zatrzymaj();
    
    p2->przyspiesz();
    p2->zatrzymaj();

    delete p1;
    delete p2;
    return 0;
}