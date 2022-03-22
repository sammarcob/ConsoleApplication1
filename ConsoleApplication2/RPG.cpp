/*
Project Name: RPG intro
Author:Brooks Sammarco
File Name: RPG.cpp
Purpose: Introduction to my RPG
Pseudocode: asks for your name, lets you choose a weapon with different attack power.
Matinence Log:
9/16/21: wrote all the lines of code and the comments
11/1/21: wrote the code for the weapons and damage. also wrote the random number generator from 1 - 6
1/22/22: wrote code for the npc
1/24/22: wrote room code
1/25/22: touched up npc fuctions
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

struct stats
{
    string pName;
    string pWeapon;
    int pHealth = 100;
    int pDamage = 0;
};

struct enemy
{
    int enemyDamage;
    int enemyHealth;

    void (*enemyFunction)(stats&);

};

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

enum direction { dUp, dDown, dLeft, dRight };

struct coords
{
    int x;
    int y;
};

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



void jelly( stats& r)
{   
    system("CLS");

    printf("you enter the room to see a tiny, shiny blob on the ground\nyou examine it closer and rotates to look at you\n it's big, pitch black eyes look hollow.\n");
    _getch();
    printf("it almost feels as if it is taking note of possible weaknesses...\n you slowly walk away from it.\n");
    string enemy = "Jelly";
    int enemyHealh = 7;
    int enemyDamage = 7;
    
};
void butter( stats& r)
{   
    system("CLS");

    printf("butter: 'hey man hey hey hey hey hey hey hey hey hey hey, i bet you cant touch me, hhehehehheheHEHEHEHHAHAHAHAHAHAHAHAH'\n");
    _getch();
    printf("butter slides across the floor and slams into a table, knocking over some of your childhood pictures\n");
    _getch();
    printf("butter: 'awwww mannn sorry maaaaaaaaannnnnnn, i really godda goooo maaaaa- SEE YA!\n", r.pName.c_str());
    _getch();
    printf("butter slides to the other side of the room and smashes through the wall\n");
    string enemy = "Butter";
    int enemyHealh = 5;
    int enemyDamage = 2; //very fast and hyper 
};
void jam( stats& r)
{
    system("CLS");

    printf("Jam is here!\n\nDude, he's so freaking cool.");
    _getch();
    printf("dude jam is so cool dude\n");
    _getch();
    printf("dude i wish i was as cool as jam bro...\n");
    string enemy = "Jam";
    int enemyHealh = 9;
    int enemyDamage = 8;
};
void chad(stats& r)
{
    system("CLS");

    printf("Chad walks into the room\n");
    _getch();
    printf("chad: 'dude'\n");
    _getch();
    printf("you: 'hey chad'\n");
    _getch();
    printf("chad: 'yo whats up dude, what's been going on dude'\n");
    _getch();
    printf("you: 'not much'\n");
    _getch();
    printf("chad: 'dude. that's so cool dude'\n");
    _getch();
    printf("chad: 'anyways dude, i found a half eaten burrito on the sidewalk yesterday dude. You want to chow down dude?'\n");
    Sleep(40);
    printf("you have to leave quick...\n");
    _getch();
    string enemy = "Chad(your roomate)";
    int enemyHealh = 14;
    int enemyDamage = 0; //he just talks your head off
};
void molassas( stats& r)
{
    system("CLS");

    printf("you walk into the room.\nIt's quiet...\n");
    Sleep(60);
    system("CLS");
    printf("h");
    Sleep(10);
    system("CLS");
    printf("hh");
    Sleep(10);
    system("CLS");
    printf("hhh");
    Sleep(10);
    system("CLS");
    printf("hhhh");
    Sleep(10);
    system("CLS");
    printf("hhhhe");
    Sleep(10);
    system("CLS");
    printf("hhhhee");
    Sleep(10);
    system("CLS");
    printf("hhhheee");
    Sleep(10);
    system("CLS");
    printf("hhhheeee");
    Sleep(10);
    system("CLS");
    printf("hhhheeeey");
    Sleep(10);
    system("CLS");
    printf("hhhheeeeyy");
    Sleep(10);
    system("CLS");
    printf("hhhheeeeyyy");
    Sleep(10);
    system("CLS");
    printf("hhhheeeeyyyy");
    Sleep(50);
    printf("you turn you head to see none other than molassas\n");
    _getch();
    system("CLS");
    printf("s");
    Sleep(10);
    system("CLS");
    printf("ss");
    Sleep(10);
    system("CLS");
    printf("sso");
    Sleep(10);
    system("CLS");
    printf("ssoo");
    Sleep(10);
    system("CLS");
    printf("ssoo w");
    Sleep(10);
    system("CLS");
    printf("ssoo ww-");
    _getch();

    system("CLS");
    printf("fed up, you head towards the door...\n");

    string enemy = "Molassas";
    int enemyHealh = 10;
    int enemyDamage = 8; //slow
};
void peanutButter( stats& r)
{
    system("CLS");

    string enemy = "peanut butter";
    int enemyHealh = 3;
    int enemyDamage = 2;
    printf("You start to open the door but have to stopped when enveloped in a blinding golden light\nyou: 'it- it cant be!'\n");
    _getch();
    printf("you manage to open the door all the way.\nyour eyes dialate... standing in the middle of the room is none other than Peanut Butter...\n");
    _getch();
    printf("Peanut Butter: 'hello young one.'\nyou:'l-l-lord peunut butter!'\nPeanut Butter: 'I taste very good on toast. you should try it sometime'\n");
    _getch();
    printf("with that you bow your head with gratitude an make your way out of the room\n");
    _getch();
    system("CLS");
    
};

void enemies(stats& r, vector<enemy>& enemylist)
{
    
    int ranEnemy;
    int min = 0;
    int max = 5;
    

    ranEnemy = min + rand() % (max - min + 1);
    
    enemylist[ranEnemy].enemyFunction(r);
    

}



int main()
{
    stats r;
    printf("you: 'i need my Bred so i can toast it!'\n");
    _getch();
    printf("you: 'i have some Bred'\n");
    printf("you: 'but my toaster is over there'\n");
    _getch();
    printf("you: 'now i have to go across my confusing house to look for my toaster'\n");
    printf("you: 'darn. too bad my house is a literal mansion...'\n");
    _getch();
    system("CLS");
    bool start = true;
    bool credits = false;
    srand(0);
    srand((unsigned)time(NULL));
    
    
    string input;
    string input2;
    
    while (1 < 2)
    {


        system("CLS");
        while (1 < 2)
        {
            // main menu
            printf("Use a and d to switch between options. press space to select\n");
            printf("Start||||||||||Credits\n");
            printf("^^^^^                 \n");
            while (true)
            {
                _flushall();
                input = _getch();

                if (input == "a" || input == "A")
                {
                    system("CLS");
                    printf("Use a and d to switch between options. press space to select\n");
                    printf("Start||||||||||Credits\n");
                    printf("^^^^^                 \n");

                    start = true;
                    credits = false;
                }
                else if (input == "d" || input == "D")
                {
                    system("CLS");
                    printf("Use a and d to switch between options. press space to select\n");
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
                system("CLS");
                printf("to toast Bred you have to have to have a name so lets hear it:\n");
                cin >> r.pName;
                if (r.pName == "Brooks")
                {
                    printf("Ah! Brooks is a great name!\n");
                }
                else if (r.pName == "brooks")
                {
                    printf("Ah! brooks is a great name!\n");
                }
                else if (r.pName == "joey")
                {
                    printf("uhm... alright. if you insist.\n");
                }
                else if (r.pName == "Joey" || "Trail" || "trail")
                {
                    printf("uhm... alright. if you insist.\n");
                }
                else
                {
                    printf("Alright %s is an okay name... I guess it will work\n", r.pName.c_str());
                }
                printf("-press any key to continue-\n");
                _getch();
                system("CLS");

                printf("if you're going to toast bread you're going to need your butter spreading weapon of choice\n");
                printf("do you spread with a spoon, knife or fork\ntype out your answer, then hit enter:\n");
                cin >> r.pWeapon;
                if (r.pWeapon == "spoon" || r.pWeapon == "Spoon" || r.pWeapon == "SPOON")
                {
                    printf("Ah, the spoon. Fantastic choice. Obviously you are no beginner to this.\n");
                    r.pDamage = r.pDamage + 5;
                }
                else if (r.pWeapon == "knife" || r.pWeapon == "Knife" || r.pWeapon == "KNIFE")
                {
                    printf("knife... alright.\n");
                    r.pDamage = r.pDamage + 7;
                }
                else if (r.pWeapon == "fork" || r.pWeapon == "Fork" || r.pWeapon == "FORK")
                {
                    printf("Fork?-- i mean, good choice");
                    r.pDamage = r.pDamage + 6;
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

                printf("weapon: %s\n", r.pWeapon.c_str());
                printf("weapon damage: %i\n", r.pDamage);
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
                start = true;
                continue;
            }
        }
        //initializing enemies
        vector<enemy> enemylist;
        enemy enemy1;
        enemy1.enemyDamage = 6;
        enemy1.enemyHealth = 12;
        enemy1.enemyFunction = &chad;
        enemylist.push_back(enemy1);

        enemy1.enemyFunction = &jam;
        enemylist.push_back(enemy1);

        enemy1.enemyFunction = &peanutButter;
        enemylist.push_back(enemy1);

        enemy1.enemyFunction = &jelly;
        enemylist.push_back(enemy1);

        enemy1.enemyFunction = &butter;
        enemylist.push_back(enemy1);

        enemy1.enemyFunction = &molassas;
        enemylist.push_back(enemy1);

        // rooms
        room currentRoom;
        currentRoom.coordinates.x = 1;
        currentRoom.coordinates.y = 5;
        string choice;
        system("CLS");
        while (true)
        {
            if (currentRoom.coordinates.x == 1 && currentRoom.coordinates.y == 5)
            {
                system("CLS");
                printf("you walk into the room...\n");
                _getch();
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you and a door to your right\n\n do you go right(d) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, a door to your left and a door to your right\n\n do you go right(d), left(a) or down(s)?. Use WASD to input your answer\n");

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

                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, a door to your left and a door to your right\n\n do you go right(d), left(a) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, a door to your left and a door to your right\n\n do you go right(d), left(a) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you and a door to your left\n\n do you go left(a) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, and a door to your right\n\n do you go right(d), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door to your right\n\n do you go left(a), right(d), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door to your right\n\n do you go left(a), right(d), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door to your right\n\n do you go left(a), right(d), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door above you\n\n do you go left(a)), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, and a door to your right\n\n do you go right(d), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door to your right\n\n do you go left(a), right(d), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door to your right\n\n do you go left(a), right(d), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door to your right\n\n do you go left(a), right(d), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door above you\n\n do you go left(a)), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, and a door to your right\n\n do you go right(d), up(w) or down(s)?. Use WASD to input your answer\n");                                                                                                                                                                                                      

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door to your right\n\n do you go left(a), right(d), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door to your right\n\n do you go left(a), right(d), up(w) or down(s)?. Use WASD to input your answer\n");
                
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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door to your right\n\n do you go left(a), right(d), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door below you, above you, to your left and a door above you\n\n do you go left(a), up(w) or down(s)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door above you and a door to your right\n\n do you go right(d) or up(w)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door to your left, a door above you and a door to your right\n\n do you go right(d), left(a) or up(w)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door to your left, a door above you and a door to your right\n\n do you go right(d), left(a) or up(w)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("you walk into the room...\n");
                Sleep(50);
                enemies(r, enemylist);
                _getch();
                system("CLS");
                printf("you have a door to your left, a door above you and a door to your right\n\n do you go right(d), left(a) or up(w)?. Use WASD to input your answer\n");

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
                system("CLS");
                printf("room 25... finally!\n");
                printf("you found the toaster!\n");
                _getch();
                break;
            }






        }


        printf("you made it to room 25\nhowever, you just remembered that there is an even better toaster with twice as many slots to toast bread!\n but... it's on the ther side of the house\n\n");
        _getch();
        printf("you could either be satisfied with the toaster you have now, or you could make the voyage over to the other side...");
        printf("so, what will you pick @s?\n will you 'stay' or will you 'go'\n\ntype your answer below:\n", r.pName.c_str());
        cin >> choice;
        if (choice == "stay")
        {
            printf("are you sure??\n it's a real nice toaster!\n");
            printf("y     n\n");
            cin >> choice;
            if (choice == "y");
            {
                printf("alright then... off you go.\n");
                _getch();
                return 0;
            }
        }
        else if (choice == "go")
        {
            printf("great choice!. I just know that you'll love that toaster!\n");
            _getch();
            continue;
        }
    }
    _getch();



    

     
}