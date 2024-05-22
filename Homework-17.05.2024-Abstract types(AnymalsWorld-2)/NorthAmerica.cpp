#include "NorthAmerica.h"

    NorthAmerica::NorthAmerica() : NorthAmerica("North America") {}

    NorthAmerica::NorthAmerica(const string& nameContinent) {
        SetContinent(nameContinent);
    }

    NorthAmerica::~NorthAmerica() {};

    void NorthAmerica::SetContinent(string nameContinent) {
        this->nameContinent = nameContinent;
    }

    string NorthAmerica::GetName() const {
        return nameContinent;
    }

    void NorthAmerica::CreateHerbivores(vector<Herbivore*>& herbivores) const {
        herbivores.push_back(new Bison(nameContinent));
    }

    void NorthAmerica::CreateCarnivores(vector<Carnivore*>& carnivores) const {
        carnivores.push_back(new Wolf(nameContinent));
    }
