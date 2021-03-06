/*
Author: Brooks Sammarco
Project Name: 
File Name:  'n stuff.cpp
Purpose: 
Pseudocode: 
Maintenance Log:
2/22/22: 
*/

#define _USE_MATH_DEFINES
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

struct info
{
    int i;
    float f;
    string s;
    char c;
};

int main()
{
    string temp;
    ifstream comma;
    ofstream tab;
    comma.open("commaDelimited.txt");
    tab.open("tabDelimited.txt");

    vector <info> vec;

    if (!comma.is_open())
    {
        printf("comma file not found");
    }

    while (getline(comma, temp, ','))
    {
        info x;
        
        x.i = stoi(temp);
        tab << temp << "\t";

        getline(comma, temp, ',');

        x.f = stof(temp);
        tab << temp << "\t";

        getline(comma, temp, ',');

        x.s = temp;
        tab << temp << "\t";

        getline(comma, temp);
        
        x.c = temp[0];
        tab << temp << "\n";

        vec.push_back(x);
    }
    

}