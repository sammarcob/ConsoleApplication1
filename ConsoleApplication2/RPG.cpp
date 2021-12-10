/*
Project Name: RPG intro
Author:Brooks Sammarco
File Name: RPG.cpp
Purpose: Introduction to my RPG
Pseudocode: asks for your name, lets you choose a weapon with different attack power.
Matinence Log:
9/16/21: wrote all the lines of code and the comments
11/1/21: wrote the code for the weapons and damage. also wrote the random number generator from 1 - 6
*/


#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
    printf("'oh i need my Bred so i can toast it'\n");
    _getch();
    printf("'oh i have some Bred'\n");
    printf("'but my toaster is over there'\n");
    _getch();
    printf("'now i have to go across my house to look for my toaster'\n");
    printf("'darn. too bad my house is a literal mansion'\n");
    _getch();
    system("CLS");
    bool start = true;
    bool credits;
    int health = 100;
    int damage = 0;
    string name;
    string weapon;
    int min = 1;
    int max = 6;
    int _6SidedDie;
    srand(0);
    srand((unsigned)time(NULL));
    _6SidedDie = min + rand() % (max - min + 1);

    // main menu
    printf("Start||||||||||Credits");
    while (!start || !credits)
    {
        if (start = true)
        {
            printf("Start||||||||||Credits");
            printf("^^^^^      ");

        }

    }


    printf("to toast Bred you have to have to have a name so lets hear it:\n");
    cin >> name;
    if (name == "Brooks")
    {
        printf("Ah! Brooks is a great name!\n");
    }
    else if (name == "brooks")
    {
        printf("Ah! brooks is a great name!\n");
    }
    else if (name == "joey")
    {
        printf("uhm... alright. if you insist.\n");
    }
    else if (name == "Joey")
    {
        printf("uhm... alright. if you insist.\n");
    }
    else
    {
        printf("Alright %s is an okay name... I guess it will work\n", name.c_str());
    }
    printf("-press any key to continue-\n");
    _getch();
    system("CLS");

    printf("if you're going to toast bread you're going to need your butter spreading weapon of choice\n");
    printf("do you spread with a spoon or a knife\n");
    cin >> weapon;
    if (weapon == "spoon")
    {
        printf("Ah, the spoon. Fantastic choice. Obviously you are no beginner to this.\n");
        damage = damage + 5;
    }
    else if (weapon == "knife")
    {
        printf("knife... alright.\n");
        damage = damage + 7;
    }
    printf("-press any key to continue-\n");
    _getch();
    system("CLS");
     
    printf("weapon: %s\n", weapon.c_str());
    printf("weapon damage: %i\n", damage);
    _getch();





    return 0;

    /*
    if (_6SidedDie == 1)
    {
        printf("1\n");
    }
    else if (_6SidedDie == 2)
    {
        printf("2\n");
    }
    else if (_6SidedDie == 3)
    {
        printf("3\n");
    }
    else if (_6SidedDie == 4)
    {
        printf("4\n");
    }
    else if (_6SidedDie == 5)
    {
        printf("5\n");
    }
    else if (_6SidedDie == 6)
    {
        printf("6\n");
    }
    _getch();
    */  
}