/*
Author: Brooks Sammarco
Project Name: sine and cosine tables
File Name: sine and cosine tables 'n stuff.cpp
Purpose: finds the sine and cosine of any angle
Pseudocode: populates 2 vectors, then finds the sine and cosine for each angle
Maintenance Log:
2/10/22: finished 
*/
#define _USE_MATH_DEFINES
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float choice;
    vector<float>sine;
    for (int i = 0; i < 359; i++)
    {
        sine.push_back(sin(i * M_PI / 180.0));
    }


    vector<float>cosine;
    for (int i = 0; i < 359; i++)
    {
        cosine.push_back(cos(i * M_PI / 180.0));
    }

    printf("please input the ange you want to know the sine and cosine of:\n");
    cin >> choice;
    system("CLS");

    cout << "sine: " << sine[choice + 1] << endl;
    cout << "cosine: " << cosine[choice + 1] << endl;

    return 0;
}