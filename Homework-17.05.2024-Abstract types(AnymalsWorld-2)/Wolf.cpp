#include "Wolf.h"

    Wolf::Wolf() {}

    Wolf::Wolf(const string& continent) : Wolf("Wolf", 800, continent) {}

    Wolf::Wolf(string name, double power, string continent) {
        SetName(name);
        SetPower(power);
        SetContinent(continent);
    }

    Wolf::~Wolf() {}

    void Wolf::SetName(string name) {
        this->name = name;
    }

    void Wolf::SetPower(double power) {
        this->power = power;
    }

    void Wolf::SetContinent(string continent) {
        this->continent = continent;
    }

    string Wolf::GetName() const {
        return name;
    }

    double Wolf::GetPower() const {
        return power;
    }

    string Wolf::GetContinent() const {
        return continent;
    }

    void Wolf::Eat(Herbivore* herbivore) {
        if (power > herbivore->GetWeight()) {
            power += 10;
            herbivore->Die();
            cout << herbivore->GetName() << " eaten :(\n\n";
        }
        else {
            power -= 10;
            cout << herbivore->GetName() << " escaped!\n\n";
        }
    }
