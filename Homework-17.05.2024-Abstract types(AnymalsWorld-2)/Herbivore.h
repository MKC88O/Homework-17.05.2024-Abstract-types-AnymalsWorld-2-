#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Herbivore abstract {
public:
    virtual string GetName() const = 0;
    virtual double GetWeight() const = 0;
    virtual string GetContinent() const = 0;
    virtual void EatGrass() = 0;
    virtual bool IsAlive() const = 0;
    virtual void Die() = 0;
};

