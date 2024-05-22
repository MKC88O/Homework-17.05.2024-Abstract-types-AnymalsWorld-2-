// Homework-17.05.2024-Abstract types(AnymalsWorld-2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <vector>
#include "Herbivore.h"
#include "Carnivore.h"
#include "Wildebeest.h"
#include "Bison.h"
#include "Lion.h"
#include "Wolf.h"
#include "Continent.h"
#include "Africa.h"
#include "NorthAmerica.h"
#include "AnimalWorld.h"
using namespace std;

int main() {
    Continent* africa = new Africa();
    AnimalWorld africanWorld(africa);
    
    africanWorld.Print();
    cout << "\n\n";

    africanWorld.MealsHerbivores();
    africanWorld.NutritionCarnivores();
    africanWorld.Print();
    cout << "\n\n";

    delete africa;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    Continent* northAmerica = new NorthAmerica();
    AnimalWorld northAmericanWorld(northAmerica);
  
    northAmericanWorld.Print();
    cout << "\n\n";

    northAmericanWorld.MealsHerbivores();
    northAmericanWorld.NutritionCarnivores();
    northAmericanWorld.Print();
    cout << "\n\n";

    delete northAmerica;
}
