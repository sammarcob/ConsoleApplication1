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

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

enum direction { dUp, dDown, dLeft, dRight };

struct room
{
    coords coordinates;
    
    void move(direction moveDirection)
    {
        
        if (moveDirection == dUp && coordinates.y < 5)
        {
            coordinates.y++;
        }
        else if (moveDirection == dDown && coordinates.y > 1)
        {
            coordinates.y--;
        }
        else if (moveDirection == dLeft && coordinates.x > 1)
        {
            coordinates.x--;
        }
        else if (moveDirection == dRight && coordinates.x < 5)
        {
            coordinates.x++;
        }
    }
};

struct coords
{
    int x;
    int y;
};

void jelly(struct stats& r)
{
    struct stats r;
    string enemy = "Jelly";
    int enemyHealh = 7;
    int enemyDamage = 7;
    printf("Jelly attacks!");
};
void butter(struct stats& r)
{
    struct stats r;
    string enemy = "Butter";
    int enemyHealh = 5;
    int enemyDamage = 2; //high chance of dodging 
};
void jam(struct stats& r)
{
    struct stats r;
    string enemy = "Jam";
    int enemyHealh = 9;
    int enemyDamage = 8;
};
void joe(struct stats& r)
{
    struct stats r;
    string enemy = "Joe(your roomate)";
    int enemyHealh = 14;
    int enemyDamage = 0; //he just talks your head off
};
void molassas(struct stats& r)
{
    struct stats r;
    string enemy = "Molassas";
    int enemyHealh = 10;
    int enemyDamage = 8; //slow
};
void nutella(struct stats& r)
{
    struct stats r;
    string enemy = "Nutella";
    int enemyHealh = 3;
    int enemyDamage = 2;
    printf("Nutella is here!\n\nHe's...\n\n");
    Sleep(40);
    printf("Kinda cool\n\nHe's better on straight white bread though\n");
    _getch();
    system("CLS");
    
};

int enemies()
{
    stats r;
    int ranEnemy;
    int min = 1;
    int max = 6;
    srand(0);
    srand((unsigned)time(NULL));

    ranEnemy = min + rand() % (max - min + 1);

    
    return ranEnemy;
}

struct stats
{
    string name;
    string weapon;
    int health;
    int damage = 0;
};
int main()
{
    struct stats r;
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
    
    string input;
    string input2;
    
    
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
            cin >> r.name;
            if (r.name == "Brooks")
            {
                printf("Ah! Brooks is a great name!\n");
            }
            else if (r.name == "brooks")
            {
                printf("Ah! brooks is a great name!\n");
            }
            else if (r.name == "joey")
            {
                printf("uhm... alright. if you insist.\n");
            }
            else if (r.name == "Joey" || "Trail" || "trail")
            {
                printf("uhm... alright. if you insist.\n");
            }
            else
            {
                printf("Alright %s is an okay name... I guess it will work\n", r.name.c_str());
            }
            printf("-press any key to continue-\n");
            _getch();
            system("CLS");

            printf("if you're going to toast bread you're going to need your butter spreading weapon of choice\n");
            printf("do you spread with a spoon, knife or fork\n");
            cin >> r.weapon;
            if (r.weapon == "spoon")
            {
                printf("Ah, the spoon. Fantastic choice. Obviously you are no beginner to this.\n");
                damage = damage + 5;
            }
            else if (r.weapon == "knife")
            {
                printf("knife... alright.\n");
                damage = damage + 7;
            }
            else if(r.weapon == "fork")
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

            printf("weapon: %s\n", r.weapon.c_str());
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
    room currentRoom;
    currentRoom.coordinates.x = 1;
    currentRoom.coordinates.y = 5; 
    string choice;
    system("CLS");
    while (true)
    {
        if (currentRoom.coordinates.x == 1 && currentRoom.coordinates.y == 5)   
        {
            printf("You walk out of your kitchen and out into the first room. It's your living room you must search every room .");
            printf("you have a door below you and a door to your right\n\n do you go right(d) or down(s)?. Use WASD to input your answer");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            //1
        }
        else if (currentRoom.coordinates.x == 2 && currentRoom.coordinates.y == 5)
        {
            //2
            printf("room 2\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 3 && currentRoom.coordinates.y == 5)
        {
            //3
            printf("room 3\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 4 && currentRoom.coordinates.y == 5)
        {
            //4
            printf("room 4\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 5 && currentRoom.coordinates.y == 5)
        {
            //5
            printf("room 5\n");
            cin >> choice;
             if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 1 && currentRoom.coordinates.y == 4)
        {
            //6
            printf("room 6\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            
        }
        else if (currentRoom.coordinates.x == 2 && currentRoom.coordinates.y == 4)
        {
            //7
            printf("room 7\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 3 && currentRoom.coordinates.y == 4)
        {
            //8
            printf("room 8\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 4 && currentRoom.coordinates.y == 4)
        {
            //9
            printf("room 9\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 5 && currentRoom.coordinates.y == 4)
        {
            //10
            printf("room 10\n");
            cin >> choice;
            if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 1 && currentRoom.coordinates.y == 3)
        {
            //11
            printf("room 11\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 2 && currentRoom.coordinates.y == 3)
        {
            //12
            printf("room 12\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 3 && currentRoom.coordinates.y == 3)
        {
            //13
            printf("room 13\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 4 && currentRoom.coordinates.y == 3)
        {
            //14
            printf("room 14\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 5 && currentRoom.coordinates.y == 3)
        {
            //15
            printf("room 15\n");
            cin >> choice;
            if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 1 && currentRoom.coordinates.y == 2)
        {
            //16
            printf("room 16\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 2 && currentRoom.coordinates.y == 2)
        {
            //17
            printf("room 17\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 3 && currentRoom.coordinates.y == 2)
        {
            //18
            printf("room 18\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 4 && currentRoom.coordinates.y == 2)
        {
            //19
            printf("room 19\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 5 && currentRoom.coordinates.y == 2)
        {
            //20
            printf("room 20\n");
            cin >> choice;
            if (choice == "s")
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 1 && currentRoom.coordinates.y == 1)
        {
            //21
            printf("room 21\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            
        }
        else if (currentRoom.coordinates.x == 2 && currentRoom.coordinates.y == 1)
        {
            //22
            printf("room 22\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 3 && currentRoom.coordinates.y == 1)
        {
            //23
            printf("room 23\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 4 && currentRoom.coordinates.y == 1)
        {
            //24
            printf("room 24\n");
            cin >> choice;
            if (choice == "d")
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "w")
            {
                currentRoom.move(dUp);
                continue;
            }
            else if (choice == "a")
            {
                currentRoom.move(dLeft);
                continue;
            }
        }
        else if (currentRoom.coordinates.x == 5 && currentRoom.coordinates.y == 1)
        {
            //25
            printf("room 25\n");
            printf("congrats\n");
            _getch();
            break;
        }

        
       



    }
   





    return 0;

     
}