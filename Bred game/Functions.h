#pragma once
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

#include "npc.h"
#include "nd.h"



struct globalVariables
{
    bool credits = false;
    bool start = false;
    bool finish = false;

    vector <npc> npcs;
};


struct coords 
{
    int x;
    int y;
};


// functions
void title()
{
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    Sleep(5);                          
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    Sleep(10);                         
    printf("        |            |     \n");
    Sleep(30);                         
    printf("        --------------     \n");
    Sleep(70);                         
    system("CLS");                     
                                       
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  __    __  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    Sleep(30);                         
    system("CLS");                     
                                       
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    Sleep(40);                         
    system("CLS");                     
                                       
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    Sleep(60);                         
    printf("                           \n");
    printf(" ____                      \n");
    printf("|    |                     \n");
    printf("|____|                     \n");
    printf("|    |                     \n");
    printf("|____|                     \n");
    Sleep(60);                         
    system("CLS"); 
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    printf(" ____   ____               \n");
    printf("|    | |    |              \n");
    printf("|____| |____|              \n");
    printf("|    | | \\                 \n");
    printf("|____| |  \\                \n");
    Sleep(60);                         
    system("CLS");
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    printf(" ____   ____   ____        \n");
    printf("|    | |    | |            \n");
    printf("|____| |____| |____        \n");
    printf("|    | | \\    |            \n");
    printf("|____| |  \\   |____        \n");
    Sleep(60);
    system("CLS");
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    printf(" ____   ____   ____   ___  \n");
    printf("|    | |    | |      |   \ \n");
    printf("|____| |____| |____  |    |\n");
    printf("|    | | \\    |      |    |\n");
    printf("|____| |  \\   |____  |___/ \n");
    Sleep(100);
    system("CLS");
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("             |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("    |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    printf(" ____   ____   ____   ___  \n");
    printf("|    | |    | |      |   \ \n");
    printf("   |____| |____| |____  |    |\n");
    printf("|    | | \\   |      |    |\n");
    printf("    |____| |  \\  |____  |___/ \n");
    Sleep(10);
    system("CLS");
    printf("        _____    _________     \n");
    printf("   (              )    \n");
    printf("             |            |     \n");
    printf("        |  (  ) ()  |     \n");
    printf("                 |            |     \n");
    printf("    |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    printf("       ____  __   ____   ___  \n");
    printf("|    | |    | |      |   \ \n");
    printf("   |____| |__   __| |____  |    |\n");
    printf("|    | | \\   |      |    |\n");
    printf("    |___  _|   |  \\  |   ____  |___/ \n");
    Sleep(5);
    system("CLS");
    Sleep(130);


    
}

enum direction { dUp, dDown, dLeft, dRight };


COORD gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    return coord;
}

void rooms(globalVariables& globeVar)
{
    ofstream saveFile;
    string stringScore;
    int intScore = 0;

    saveFile.open("save.txt");

    bool blueKey = false;
    int keyChance;

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

    room currentRoom;
    currentRoom.coordinates.x = 5;
    currentRoom.coordinates.y = 3;
    string choice;
    system("CLS");
    while (true)
    {
        if (currentRoom.coordinates.x == 1 && currentRoom.coordinates.y == 5)
        {
            system("CLS");
            printf("you walk into the room...\n");
            _getch();
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25; // NOT WORK
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            printf("15");
            Sleep(50);
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();
            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            printf("20");
            Sleep(50);
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");// NOT WORK AHHH
                    _getch();
                }
            }
            system("CLS");
            printf("you have a door below you, above you, to your left and a door above you\n\n do you go left(a), up(w) or down(s)?. Use WASD to input your answer\n");

            cin >> choice;
            if (choice == "s" && blueKey == true)
            {
                currentRoom.move(dDown);
                continue;
            }
            else if (choice == "s" && blueKey == false)
            {
                printf("you try to open the door, but it's locked...");

                continue;
                //currentRoom.coordinates.y + 1;
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
            }
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
            //enemies(r, enemylist);
            _getch();

            if (blueKey == false)
            {
                keyChance = 1 + rand() % 25;
                if (keyChance == 13)
                {
                    blueKey = true;
                    printf("You found a Blue Key!\n I wonder what it's for....?");
                    _getch();
                }
                
            }
            system("CLS");
            printf("you have a door to your left, a door above you and a door to your right\n\n do you go right(d), left(a) or up(w)?. Use WASD to input your answer\n");

            cin >> choice;
            if (choice == "d" && blueKey == true)
            {
                currentRoom.move(dRight);
                continue;
            }
            else if (choice == "d" && blueKey == false)
            {
                printf("you try to open the door, but it's locked...\n");

                continue;
                //currentRoom.coordinates.x - 1;
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
            intScore++;
            system("CLS");
            printf("the door unlocks with a click and swings open!\n");
            _getch();
            printf("room 25... finally!\n");
            printf("you found the toaster!\n");
            _getch();

            printf("you made it to room 25\nhowever, you just remembered that there is an even better toaster \nwith twice as many slots to toast bread!\n but... it's on the ther side of the house\n\n");
            _getch();
            printf("you could either be satisfied with the toaster you have now, or you could make the voyage over to the other side...\n");
            printf("so, what will you pick?\n will you 'stay' or will you 'go'\n\ntype your answer below:\n");
            cin >> choice;
            if (choice == "stay")
            {
                printf("are you sure??\n it's a real nice toaster!\n");
                printf("y     n\n");
                cin >> choice;
                if (choice == "y")
                {
                    //intScore = stoi(stringScore);
                    saveFile << "High Score: " << intScore << "\n";
                    printf("alright then... off you go.\n");
                    _getch();
                    globeVar.finish = true;
                    globeVar.start = false;
                    //something to end code 

                    break;
                }
            }
            else if (choice == "go")
            {
                printf("great choice!. I just know that you'll love that toaster!\n");
                _getch();
                globeVar.finish = false;
                currentRoom.coordinates.x = 1;
                currentRoom.coordinates.y = 1;
                continue;
            }
        }



        
    }
}
// when i get to room 25, then restart, i can just go out of bounds and it sends me to room 25

void mainMenu(globalVariables& globeVar)
{
    
    string input;
   
    while (true)
    {


        system("CLS");
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

                globeVar.start = true;
                globeVar.credits = false;
            }
            else if (input == "d" || input == "D")
            {
                system("CLS");
                printf("Use a and d to switch between options. press space to select\n");
                printf("Start||||||||||Credits\n");
                printf("               ^^^^^^^\n");

                globeVar.start = false;
                globeVar.credits = true;
            }
            else if (input == " " || input == "\n")
            {
                break;
            }
        }
        if (globeVar.credits == true)
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
            // this stuff is boned probably idk
            globeVar.credits = false;
            globeVar.start = true;
            continue;
        }
        if (globeVar.start = true)
        {
            rooms(globeVar);
        }
    }
}

void intro()
{
    printf("you are a man with bred and no toaster...\n");
    _getch();
    system("CLS");
    printf("this is a very grave situation.\n");
    _getch();
    system("CLS");
    printf("you MUST find the blue key and secure the toaster!\n");
    _getch();
    system("CLS");
    printf("godspeed...\n");
    _getch();
    system("CLS");
}

void GameManager(globalVariables& globeVar)
{
    globalVariables globVar;
    title();
    intro();
    mainMenu(globeVar);
    if (globVar.start = true)
    {
        rooms(globeVar);
        

    }
}