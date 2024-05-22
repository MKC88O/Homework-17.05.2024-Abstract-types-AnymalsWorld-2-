#pragma once
#include <iostream>
#include <vector>
#include "Herbivore.h"
using namespace std;

class Bison : public Herbivore {
protected:
    string name;
    double weight = 0;
    bool life = 0;
    string continent;
public:
    Bison();
    Bison(const string& continent);
    Bison(string name, double weight, bool life, string continent);

    virtual~Bison();

    void SetName(string name);
    void SetWeight(double weight);
    void SetLife(bool life);
    void SetContinent(string continent);

    string GetName() const;
    double GetWeight() const;
    bool GetLife() const;
    string GetContinent() const;

    virtual void EatGrass();
    bool IsAlive() const;
    void Die();
};

