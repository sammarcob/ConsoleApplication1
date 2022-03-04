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

int main()
{
    string temp;
    ifstream comma;
    ofstream tab;
    comma.open("commaDelimited.txt");
    tab.open("tabDelimited.txt");

    if (!comma.is_open())
    {
        printf("comma file not found");
    }

    while (getline(comma, temp))
    {
        for (int i = 0; i < temp.length(); i++)
        {
            if (temp[i] == ',')
            {
                temp[i] = '\t';
            }
        }
        tab << temp << "\n";
    }
    

}