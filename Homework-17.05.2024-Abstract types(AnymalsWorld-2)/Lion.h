#pragma once
#include <iostream>
#include <vector>
#include "Carnivore.h"
#include "Herbivore.h"
using namespace std;

class Lion : public Carnivore {
protected:
    string name;
    double power = 0;
    string continent;
public:
    Lion();
    Lion(const string& continent);
    Lion(string name, double power, string continent);

    virtual~Lion();

    void SetName(string name);
    void SetPower(double power);
    void SetContinent(string continent);

    string GetName() const;
    double GetPower() const;
    string GetContinent() const;

    virtual void Eat(Herbivore* herbivore);
};
