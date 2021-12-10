/*
Author: Brooks Sammarco
Project Name: looping maze
File Name: looping made 'n stuff.cpp
Purpose: create a looping maze
Pseudocode: creats a while statement that has 8 different scenerios in it that let you go through the maze using bools
Maintenance Log:
12/7/21: did somestuff
12/9/21: finished the code
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
    
    bool room1 = true;
    bool room2 = false;
    bool room3 = false;
    bool room4 = false;
    bool room5 = false;
    bool room6 = false;
    bool room7 = false;
    bool room8 = false;
    bool room9 = false;
    string choice;
    
    printf("welcome to the maze. while you are in it. please do not use capslock\n");
    _getch();

    while(!room9)
    {
        if (room1)
        {
            system("CLS");
            printf("R\n\nD");
            cin >> choice;
            if (choice == "r")
            {
                room2 = true;
                room1 = false;
            }
            else if (choice == "d")
            {
                room4 = true;
                room1 = false;
            }
        }
        else if (room2 == true)
        {
            system("CLS");
            printf("L\n\nD\n\nR");
            cin >> choice;
            if (choice == "l")
            {
                room2 = false;
                room1 = true;
            }
            else if (choice == "d")
            {
                room5 = true;
                room2 = false;
            }
            else if (choice == "r")
            {
                room2 = false;
                room3 = true;
            }
        }
        else if (room3 == true)
        {
            system("CLS");
            printf("L\n");
            cin >> choice;
            if (choice == "l")
            {
                room3 = false;
                room2 = true;
            }
        }
        else if (room4 == true)
        {
            system("CLS");
            printf("U\n\nD");
            cin >> choice;
            if (choice == "u")
            {
                room4 = false;
                room1 = true;
            }
            else if (choice == "d")
            {
                room4 = false;
                room7 = true;
            }
        }
        else if (room5 == true)
        {
            system("CLS");
            printf("L\n\nU\n\nR");
            cin >> choice;
            if (choice == "l")
            {
                room5 = false;
                room4 = true;
            }
            else if (choice == "u")
            {
                room5 = false;
                room2 = true;
            }
            else if (choice == "r")
            {
                room5 = false;
                room6 = true;
            }
        }
        else if (room6 == true)
        {
            system("CLS");
            printf("L\n");
            cin >> choice;
            if (choice == "l")
            {
                room6 = false;
                room5 = true;
            }
        }
        else if (room7 == true)
        {
            system("CLS");
            printf("U\n\nR");
            cin >> choice;
            if (choice == "u")
            {
                room7 = false;
                room4 = true;
            }
            else if (choice == "r")
            {
                room7 = false;
                room8 = true;
            }
        }
        else if (room8 == true)
        {
            system("CLS");
            printf("L\n\nR");
            cin >> choice;
            if (choice == "l")
            {
                room8 = false;
                room7 = true;
            }
            else if (choice == "r")
            {
                break;
            }
        }

    }
    system("CLS");
    printf("good job. you made it\n");

    return 0;
}