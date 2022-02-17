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
    string input;
    float choice;
    vector<float>sine;
    for (int i = 0; i < 360; i++)
    {
        sine.push_back(sin(i * M_PI / 180.0));
    }


    vector<float>cosine;
    for (int i = 0; i < 360; i++)
    {
        cosine.push_back(cos(i * M_PI / 180.0));
    }

    while (true)
    {
        system("CLS");
        printf("please input the ange you want to know the sine and cosine of:\n");
        cin >> choice;
        system("CLS");

        cout << "sine: " << sine[choice] << endl;
        cout << "cosine: " << cosine[choice] << endl;

        _getch();
        system("CLS");
        printf("do you want to input another angle?\n (y/n)\n");
        cin >> input;
        if (input == "y")
        {
            continue;
        }
        else if (input == "n")
        {
            break;
        }
        else
        {
            printf("invalid input\n");
            break;
        }
    }

    return 0;
}