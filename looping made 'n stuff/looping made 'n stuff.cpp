/*
Author: Brooks Sammarco
Project Name: 
File Name:  'n stuff.cpp
Purpose: 
Pseudocode: 
Maintenance Log:
12/6/21: did somestuff
*/

#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
using namespace std;

int main()
{
    string choice;

    printf("welcome to the maze except you can open doors again 'n stuff\n");
    while (1)
    {
        system("CLS");
        printf("d l\n");
        cin >> choice;
        if (choice == "d")
        {
            system("CLS");
            printf("u r d\n");
            cin >> choice;
            if (choice == "u")
            {
                break;
            }
            else if (choice == "r")
            {
                system("CLS");
                printf("")
            }
        }
        else if (choice == "r")
        {
            system("CLS");
            printf("l d r\n");
            cin >> choice;
        }
    }
}
