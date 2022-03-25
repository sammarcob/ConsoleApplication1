/*
Author: Brooks Sammarco
Project Name: animal class
File Name:
Purpose:
Pseudocode:
Maintenance Log:

*/

#pragma once
#define _USE_MATH_DEFINES
#include "math.h"
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <fstream>
#include "animal.h"
using namespace std;

int main()
{
    animal a;

    string sName;
    float sWeight;
    string sSpecies;

    string input;

    printf("please enter the name of your animal: ");
    cin >> sName;
    printf("please enter the weight of your animal: ");
    cin >> sWeight;
    printf("please enter the species of your animal: ");
    cin >> sSpecies;
    _getch();
    system("CLS");

    a.setData(sName, sWeight, sSpecies);
    cout << "animal name: " << a.getName() << "\n" << "weight: " << a.getWeight() << "\n" << "species: " << a.getSpecies() << endl;

    return 0;

}