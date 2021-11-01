/*
Project Name: RPG intro
Author:Brooks Sammarco
File Name: RPG.cpp
Purpose: Introduction to my RPG
Pseudocode: Prints 16 lines of code 
Matinence Log:
9/16/21:wrote all the lines of code and the comments
*/


#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    printf("'oh i need my Bred so i can toast it'\n");
    _getch();
    printf("'oh i have some Bred'\n");
    printf("'but my toaster is over there'\n");
    _getch();
    printf("'now i have to go across my house to look for my toaster'\n");
    printf("'darn'\n");
    _getch();
    system("CLS");

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

    printf("to toast Bred you have to have to have a name so lets hear it:\n");
    cin >> name;
    printf("alright. %s is an okay name i guess it will work\n", name.c_str());
    printf("-press any key to continue-");
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
    printf("-press any key to continue-");
   

    return 0;
}

 