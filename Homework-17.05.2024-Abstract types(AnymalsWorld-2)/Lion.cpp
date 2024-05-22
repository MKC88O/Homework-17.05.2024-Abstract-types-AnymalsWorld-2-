#include "Lion.h"

    Lion::Lion() {}

    Lion::Lion(const string& continent) : Lion("Lion", 1200, continent) {}

    Lion::Lion(string name, double power, string continent) {
        SetName(name);
        SetPower(power);
        SetContinent(continent);
    }

    Lion::~Lion() {}

    void Lion::SetName(string name) {
        this->name = name;
    }

    void Lion::SetPower(double power) {
        this->power = power;
    }

    void Lion::SetContinent(string continent) {
        this->continent = continent;
    }

    string Lion::GetName() const {
        return name;
    }

    double Lion::GetPower() const {
        return power;
    }

    string Lion::GetContinent() const {
        return continent;
    }

    void Lion::Eat(Herbivore* herbivore) {
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
