//
// Created by Doma on 2021-12-10.
//

#include "Food.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include<time.h>
#include <limits>

using namespace std;

void Food::printIntro() {
    int mainMenuInput;
    cout << "****************************************************" << endl;
    cout << " Welcome to the terminal based food menu generator!" << endl;
    cout << "****************************************************" << endl;


};

void Food::generateMenu() {
    string salad;
    vector<string> lines1;
    srand(time(0));
    ifstream file1;
    file1.open("..\\data\\salad.txt");
    int total_lines1 = 0;
    while (getline(file1, salad)) {
        total_lines1++;
        lines1.push_back(salad);
    }
    int random_number = rand() % total_lines1;
    cout << "Salad: " << lines1[random_number] << endl;

    // repeat 3 times
    string main;
    vector<string> lines2;
    srand(time(0));
    ifstream file2;
    file2.open("..\\data\\main.txt");
    int total_lines2 = 0;
    while (getline(file2, main)) {
        total_lines2++;
        lines2.push_back(main);
    }
    random_number = rand() % total_lines2;
    cout << "Main dish: " << lines2[random_number] << endl;

    string dessert;
    vector<string> lines3;
    srand(time(0));
    ifstream file3;
    file3.open("..\\data\\dessert.txt");
    int total_lines3 = 0;
    while (getline(file3, dessert)) {
        total_lines3++;
        lines3.push_back(dessert);
    }
    random_number = rand() % total_lines3;
    cout << "Dessert: " << lines3[random_number] << endl;
};

void Food::addSalad() {
    fstream myFile_Handler;
    int mainMenuInput;
    myFile_Handler.open("..\\data\\salad.txt", ios::app);
    cout << "Please enter the name of the salad you would like to add:" << endl;
    cin >> salad;
    cout << "You just added " << salad << " to your list with salads" << endl;
    myFile_Handler << salad << endl;
    cout << "\n [1] to add another item to the menu"
            "\n [2] to generate a menu " << endl;
    cin >> mainMenuInput;
    switch (mainMenuInput) {
        case 1:

            showMainMenu();
            break;

        case 2:
            generateMenu();
            break;

    }
    myFile_Handler.close();
};

void Food::addMainDish() {
    fstream myFile_Handler;
    int mainMenuInput;
    myFile_Handler.open("..\\data\\main.txt", ios::app);
    cout << "Please enter the name of the main dish you would like to add:" << endl;
    cin >> main;
    cout << "You just added " << main << " to your list with main dishes" << endl;
    myFile_Handler << main << endl;
    cout << "\n [1] to add another item to the menu"
            "\n [2] to generate a menu " << endl;
    cin >> mainMenuInput;
    switch (mainMenuInput) {
        case 1:

            showMainMenu();
            break;

        case 2:
            generateMenu();
            break;

    }
    myFile_Handler.close();
};

void Food::addDessert() {
    fstream myFile_Handler;
    int mainMenuInput;
    myFile_Handler.open("..\\data\\dessert.txt", ios::app);
    cout << "Please enter the name of the dessert you would like to add:" << endl;
    cin >> dessert;
    cout << "You just added " << dessert << " to your list with desserts" << endl;
    myFile_Handler << dessert << endl;
    cout << "\n [1] to add another item to the menu"
            "\n [2] to generate a menu " << endl;
    cin >> mainMenuInput;
    switch (mainMenuInput) {
        case 1:
           // something();
            break;

        case 2:
            generateMenu();
            break;

    }
    myFile_Handler.close();


};

void Food::showMainMenu() {
    int mainMenuInput;
    int subMenuInput;
    fstream myFile_Handler;
    cout << "\n [1] to add food to the menu"
            "\n [2] to generate a menu "
            "\n [3] to list all items in a category" << endl;
    cin >> mainMenuInput;
    switch (mainMenuInput) {
       // Food::something(){
        case 1:

            cout << "[1] to add salad to the menu" << endl;
            cout << "[2] to add main dish to the menu" << endl;
            cout << "[3] to add dessert to the menu" << endl;
            cin >> subMenuInput;
            switch (subMenuInput) {
                case 1:
                    addSalad();
                    break;
                case 2:
                    addMainDish();
                    break;
                case 3:
                    addDessert();
                    break;
            }
            break;
          //  };
        case 2:
            generateMenu();
            break;

    }

};

Food::Food() {
    printIntro();
    showMainMenu();
};