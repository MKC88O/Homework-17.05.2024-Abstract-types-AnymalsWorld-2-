#include "Bison.h"

    Bison::Bison() {}

    Bison::Bison(const string& continent) : Bison("Bison", 1500, true, continent) {}

    Bison::Bison(string name, double weight, bool life, string continent) {
        SetName(name);
        SetWeight(weight);
        SetLife(life);
        SetContinent(continent);
    }

    Bison::~Bison() {};

    void Bison::SetName(string name) {
        this->name = name;
    }

    void Bison::SetWeight(double weight) {
        this->weight = weight;
    }

    void Bison::SetLife(bool life) {
        this->life = life;
    }

    void Bison::SetContinent(string continent) {
        this->continent = continent;
    }

    string Bison::GetName() const {
        return name;
    }

    double Bison::GetWeight() const {
        return weight;
    }

    bool Bison::GetLife() const {
        return life;
    }

    string Bison::GetContinent() const {
        return continent;
    }

    void Bison::EatGrass() {
        weight += 10;
        cout << GetName() << " Eats grass on the field...\n\n";
    }

    bool Bison::IsAlive() const {
        return life;
    }

    void Bison::Die() {
        life = false;
    }
