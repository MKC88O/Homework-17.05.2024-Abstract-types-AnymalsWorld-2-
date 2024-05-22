#pragma once
#include <iostream>
#include <vector>
#include "Carnivore.h"
#include "Herbivore.h"
#include "Continent.h"
#include "Bison.h"
#include "Wolf.h"
using namespace std;
class NorthAmerica : public Continent {
protected:
    string nameContinent;
public:
    NorthAmerica();
    NorthAmerica(const string& nameContinent);

    virtual~NorthAmerica();

    void SetContinent(string nameContinent);

    string GetName() const;

    virtual void CreateHerbivores(vector<Herbivore*>& herbivores) const;
    virtual void CreateCarnivores(vector<Carnivore*>& carnivores) const;
};

