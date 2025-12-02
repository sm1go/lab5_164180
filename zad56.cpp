#include <iostream>
#include <string>

class Pojazd {
protected:
    std::string marka;
    std::string model;
public:
    void setDane(std::string m, std::string mod) {
        marka = m;
        model = mod;
    }
};

class SamochodProtected : protected Pojazd {
public:
    void pokazDane() {
        setDane("Toyota", "Corolla");
        std::cout << "Marka: " << marka << ", Model: " << model << std::endl;
    }
};

class SamochodPrivate : private Pojazd {
public:
    void pokazDane() {
        setDane("Ford", "Focus");
        std::cout << "Marka: " << marka << ", Model: " << model << std::endl;
    }
};

int main() {
    SamochodProtected s1;
    s1.pokazDane();

    SamochodPrivate s2;
    s2.pokazDane();

    return 0;
}