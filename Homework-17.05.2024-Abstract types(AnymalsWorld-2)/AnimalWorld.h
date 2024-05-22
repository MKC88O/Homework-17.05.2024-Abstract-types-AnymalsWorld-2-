#pragma once
#include <iostream>
#include <vector>
#include "Carnivore.h"
#include "Herbivore.h"
#include "Continent.h"
using namespace std;
class AnimalWorld {
    Continent* continent;
    vector<Herbivore*> herbivores;
    vector<Carnivore*> carnivores;

public:
    AnimalWorld();
    AnimalWorld(Continent* continent);

    ~AnimalWorld();

    void SetContinent(Continent* continent);

    Continent* GetContinent();

    void MealsHerbivores();
    void NutritionCarnivores();
    void Print() const;
};

