#pragma once
#include <iostream>
#include <vector>
#include "Carnivore.h"
#include "Herbivore.h"
using namespace std;

class Wolf : public Carnivore {
protected:
    string name;
    double power = 0;
    string continent;
public:
    Wolf();
    Wolf(const string& continent);
    Wolf(string name, double power, string continent);

    virtual~Wolf();

    void SetName(string name);
    void SetPower(double power);
    void SetContinent(string continent);

    string GetName() const;
    double GetPower() const;
    string GetContinent() const;

    void Eat(Herbivore* herbivore);
};

