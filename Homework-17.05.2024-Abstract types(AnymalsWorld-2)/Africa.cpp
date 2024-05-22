#include "Africa.h"

    Africa::Africa() : Africa("Africa") {}

    Africa::Africa(const string& nameContinent) {
        SetContinent(nameContinent);
    }
    Africa::~Africa() {};

    void Africa::SetContinent(string nameContinent) {
        this->nameContinent = nameContinent;
    }

    string Africa::GetName() const {
        return nameContinent;
    }

    void Africa::CreateHerbivores(vector<Herbivore*>& herbivores) const {
        herbivores.push_back(new Wildebeest(nameContinent));
    }

    void Africa::CreateCarnivores(vector<Carnivore*>& carnivores) const {
        carnivores.push_back(new Lion(nameContinent));
    }
