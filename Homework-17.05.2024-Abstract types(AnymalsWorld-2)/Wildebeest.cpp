#include "Wildebeest.h"

    Wildebeest::Wildebeest() {}

    Wildebeest::Wildebeest(const string& continent) : Wildebeest("Wildebeest", 1000, true, continent) {}

    Wildebeest::Wildebeest(string name, double weight, bool life, string continent) {
        SetName(name);
        SetWeight(weight);
        SetLife(life);
        SetContinent(continent);
    }

    Wildebeest::~Wildebeest() {};

    void Wildebeest::SetName(string name) {
        this->name = name;
    }

    void Wildebeest::SetWeight(double weight) {
        this->weight = weight;
    }

    void Wildebeest::SetLife(bool life) {
        this->life = life;
    }

    void Wildebeest::SetContinent(string continent) {
        this->continent = continent;
    }

    string Wildebeest::GetName() const {
        return name;
    }

    double Wildebeest::GetWeight() const {
        return weight;
    }

    bool Wildebeest::GetLife() const {
        return life;
    }

    string Wildebeest::GetContinent() const {
        return continent;
    }

    void Wildebeest::EatGrass() {
        weight += 10;
        cout << GetName() << " Eats grass on the field...\n\n";
    }

    bool Wildebeest::IsAlive() const {
        return life;
    }

    void Wildebeest::Die() {
        life = false;
    }
