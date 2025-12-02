#include <iostream>

class Pojazd {
public:
    virtual void przyspiesz() {
        std::cout << "Pojazd przyspiesza" << std::endl;
    }
};

class Silnikowy : virtual public Pojazd {
};

class Elektryczny : virtual public Pojazd {
};

class Hybryda : public Silnikowy, public Elektryczny {
public:
    void przyspiesz() override {
        std::cout << "Hybryda przyspiesza korzystajac z obu napedow" << std::endl;
    }
};

int main() {
    Hybryda h;
    h.przyspiesz();
    return 0;
}