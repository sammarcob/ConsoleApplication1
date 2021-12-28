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

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

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
    bool credits = false;
    int health = 100;
    int damage = 0;
    string name;
    string weapon;
    string input;
    string input2;
    int min = 1;
    int max = 6;
    int _6SidedDie;
    srand(0);
    srand((unsigned)time(NULL));
    _6SidedDie = min + rand() % (max - min + 1);
    while (1 < 2)
    {
        // main menu
        printf("Start||||||||||Credits\n");
        printf("^^^^^                 \n");
        while (true)
        {
            _flushall();
            input = _getch();

            if (input == "a" || input == "A")
            {
                system("CLS");
                printf("Start||||||||||Credits\n");
                printf("^^^^^                 \n");
                
                start = true;
                credits = false;
            }
            else if (input == "d" || input == "D")
            {
                system("CLS");
                printf("Start||||||||||Credits\n");
                printf("               ^^^^^^^\n");

                start = false;
                credits = true;
            }
            else if (input == " " || input == "\n")
            {
                break;
            }
        }
        if (start == true)
        {
            start = true;
            credits = false;
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
            else if (name == "Joey" || "Trail" || "trail")
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
            printf("do you spread with a spoon, knife or fork\n");
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
            else if(weapon == "fork")
            {
                printf("Fork?-- i mean, good choice");
                damage = damage + 6;
            }
            else
            {
                printf("bruh");
                Sleep(70);
                return 0;
            }
            printf("-press any key to continue-\n");
            _getch();
            system("CLS");

            printf("weapon: %s\n", weapon.c_str());
            printf("weapon damage: %i\n", damage);
            _getch();
            break;
        }
        else if (credits == true)
        {
            printf("Code by Brooks Sammarco\n\n\n");
            printf("Story by Brooks Sammarco\n\n\n");
            printf("Coolness by Brooks Sammarco\n\n\n");

            printf("gumby\n");
            Sleep(100);
            printf("gumby\n");
            Sleep(80);
            printf("gumby\n");
            Sleep(60);
            printf("gumby\n");
            Sleep(40);
            printf("gumby\n");
            Sleep(20);
            printf("gumby\n");
            Sleep(10);
            printf("gumby\n");
            Sleep(9);
            printf("gumby\n");
            Sleep(8);
            printf("gumby\n");
            Sleep(7);
            printf("gumby\n\n\n");
            Sleep(1000);
            printf("gumby\n");
            
            printf("press any key to continue\n");
            _getch();
            system("CLS");
            credits = false;
            continue;
        }
    }
    int x = 0;
    int y = 0;
    string choice;
    system("CLS");
    while (true)
    {
        if (x == 1 && y == 5)
        {
            printf("you have a door below you and a door to your right\n\n do you go right(d) or down(s)?. Use WASD to input your answer");
            cin >> choice;
            if (choice == "d")
            {
                x + 1;
                continue;
            }
            else if (choice == "s")
            {
                y - 1;
                continue;
            }
        }

        // to be filled with rooms
    }
   





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