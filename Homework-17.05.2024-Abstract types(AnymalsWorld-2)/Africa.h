#pragma once
#include <iostream>
#include <vector>
#include "Carnivore.h"
#include "Herbivore.h"
#include "Continent.h"
#include "Wildebeest.h"
#include "Lion.h"
using namespace std;
class Africa : public Continent {
protected:
    string nameContinent;
public:
    Africa();
    Africa(const string& nameContinent);

    virtual~Africa() ;

    void SetContinent(string nameContinent);

    string GetName() const;

    virtual void CreateHerbivores(vector<Herbivore*>& herbivores) const;
    virtual void CreateCarnivores(vector<Carnivore*>& carnivores) const;
};

