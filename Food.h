//
// Created by Doma on 2021-12-10.
//

#ifndef MAIN_CPP_FOOD_H
#define MAIN_CPP_FOOD_H
#include <string>
using namespace std;

class Food {
    public:
        string salad, main, dessert;
        Food();
    void printIntro();
    void generateMenu();
    void addSalad();
    void addMainDish();
    void addDessert();
    void showMainMenu();
    void something();
};


#endif //MAIN_CPP_FOOD_H
