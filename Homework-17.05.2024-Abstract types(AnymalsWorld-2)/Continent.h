#pragma once
#include "Carnivore.h"
#include "Herbivore.h"

class Continent abstract {
public:
    virtual void CreateHerbivores(vector<Herbivore*>& herbivores) const = 0;
    virtual void CreateCarnivores(vector<Carnivore*>& carnivores) const = 0;
};

