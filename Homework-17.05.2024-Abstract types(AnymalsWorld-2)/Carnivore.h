#pragma once
#include <iostream>
#include <vector>
#include "Herbivore.h"
using namespace std;

class Carnivore abstract {
public:
    virtual string GetName() const = 0;
    virtual double GetPower() const = 0;
    virtual string GetContinent() const = 0;
    virtual void Eat(Herbivore* herbivore) = 0;
};

