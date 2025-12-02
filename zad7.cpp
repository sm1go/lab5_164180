#include <iostream>

class Silnikowy {
public:
    void przyspiesz() {
        std::cout << "Silnik pracuje" << std::endl;
    }
};

class Elektryczny {
public:
    void ladowanie() {
        std::cout << "Ladowanie baterii" << std::endl;
    }
};

class Hybryda : public Silnikowy, public Elektryczny {
public:
    void przyspiesz() {
        Silnikowy::przyspiesz();
        std::cout << "Wspomaganie elektryczne aktywne" << std::endl;
    }
};

int main() {
    Hybryda h;
    h.ladowanie();
    h.przyspiesz();
    return 0;
}