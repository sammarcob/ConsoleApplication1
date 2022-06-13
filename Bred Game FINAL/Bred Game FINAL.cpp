
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

#include "PlayerStats.h"
#include "Combat.h"
#include "Enemy.h"


void characterBuilder(PlayerStats& player);
bool mainMenu();
bool rooms();
void SaveGame(vector<vector<bool>> roomsVisited, int xCoord, int yCoord);
bool LoadGame(vector<vector<bool>>& roomsVisited, int& xCoord, int& yCoord);

int main()
{
    
    

    if (mainMenu())
    {
        bool beatGame = rooms();
    }
    

}

bool mainMenu()
{
    bool start = false;
    bool credits = false;
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
        if (credits == true)
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
            credits = false;
            start = true;
            continue;
        }
        if (start == true)
        {
            return true;
        }
    }
}

bool rooms()
{
    vector<Enemy> enemies;

    Enemy Jam;
    Jam.name = "Jam";
    Jam.health = 46;
    Jam.attackDamage = 9;
    enemies.push_back(Jam);

    Enemy Jelly;
    Jelly.name = "Jelly";
    Jelly.health = 25;
    Jelly.attackDamage = 11;
    enemies.push_back(Jelly);

    Enemy Vegemite;
    Vegemite.name = "Vegemite";
    Vegemite.health = 58;
    Vegemite.attackDamage = 6;
    enemies.push_back(Vegemite);


    PlayerStats player;
    characterBuilder(player);
    
    int xCoord;
    int yCoord;
    bool foundRoom25 = false;
    int keyChance = 0;
    bool blueKey = false;
    string choice;

    vector<vector<bool>> isCleared;

    if (!LoadGame(isCleared, xCoord, yCoord))
    {
        xCoord = 0;
        yCoord = 4;
        for (int x = 0; x < 5; x++)
        {
            vector<bool> temp;
            for (int y = 0; y < 5; y++)
            {
                temp.push_back(false);
            }
            isCleared.push_back(temp);
        }
    }

    while (!foundRoom25)
    {
        if (xCoord == 4 && yCoord == 0)
        {
            foundRoom25 = true;
        }
        system("CLS");
        //cout << xCoord << ", " << yCoord; //displays coords
        cout << "you walk into the room" << "\n";
        _getch();
        system("CLS");
        
        if (isCleared[xCoord][yCoord] == false)
        {
            Combat combat = enemies[rand() % enemies.size()];
            combat.exicuteCombat(player);
        //spawn monster
        //if statement for if player health drops to 0 you exit out of loop
            isCleared[xCoord][yCoord] = true;
        }
        else
        {
            cout << "The room is empty...\n\nIt looks like you've been here before...";
            _getch();
            system("CLS");
        }
        system("CLS");

        // blue key 
        if (blueKey == false)
        {
            keyChance = 1 + rand() % 10;
            if (keyChance == 1)
            {
                blueKey = true;
                printf("The monster dropped a Blue Key!\n I wonder what it's for....?");
                _getch();
                system("CLS");
            }
        }

        cout << "Options: ";

        if (xCoord > 0)
        {
            cout << "Left(a)" << "\t";
        }
        if (xCoord < 4)
        {
            cout << "Right(d)" << "\t";
        }
        if (yCoord > 0)
        {
            cout << "Down(s)" << "\t";
        }
        if (yCoord < 4)
        {
            cout << "Up(w)" << "\t";
        }
        cout << "\nEnter your choice below, then press any key to continue\n";
        cin >> choice;

        if (choice == "a" && xCoord > 0)
        {
            xCoord--;
        }
        else if (choice == "d" && xCoord < 4)
        {
            xCoord++;
        }
        else if (choice == "s" && yCoord > 0)
        {
            yCoord--;
        }
        else if (choice == "w" && yCoord < 4)
        {
            yCoord++;
        }

        if (xCoord == 4 && yCoord == 0)
        {
            system("CLS");
            cout << "the golden gates swing open and you see your toaster\n";
            _getch();
            cout << "you've made it now you can toast your bred!";
            foundRoom25 = true;
        }

        SaveGame(isCleared, xCoord, yCoord);
    }
    return false;
}

void characterBuilder(PlayerStats& player)
{
    
    int choice;
    
    cout << "Your story begins as a man with no toaster...\n";
    _getch();
    cout << "you must fight your way to room 25 and secure the toaster!";
    _getch();
    system("CLS");

    while (true)
    {

        system("CLS");
        cout << "Before you embark you need to choose your spreading utensil!\nChoose carefully!\n\n-Press any key to continue-";
        _getch();
        system("CLS");

        cout << "1. Machette: Damage(84)\n\n2. Spoon: Damage(15)\n\n3. T-54 Soviet Tank: Damage(26000)\n\n\nType your awnser below, then hit enter:\n";
        cin >> choice;

        
        if (choice == 1 || choice == 2 || choice == 3)
        {
            printf("Oh, the Spoon!\nGreat choice, but remember, you might have a lot of agility don't have a ton of attacking power!\n");
            _getch();
            player.attackDamage = 15;
            choice = 0;
            break;
        }
        else if (choice == 4)
        {
            printf("Wha- your hand?\n");
            _getch();
            printf("dude...");
            _getch();
            printf("gross...");
            _getch();
            player.attackDamage = 1;
            choice = 0;
            break;
        }
        else
        {
            printf("sorry, that's not an option");
            _getch();
            choice = 0;
            continue;
        }
    }
    system("CLS");
    cout << "Before you go, I just want to remind you of your Relax ability. It raises your stamina by 2.\n Can't keep swinging that weapong forever!\n";
    _getch();
    system("CLS");
}

void SaveGame(vector<vector<bool>> roomsVisited, int xCoord, int yCoord)
{
    ofstream out("save.txt");
    
    out << xCoord << '\n' << yCoord << '\n';
    for (int x = 0; x < roomsVisited.size(); x++)
    {
        for (int y = 0; y < roomsVisited.size(); y++)
        {
            out << roomsVisited[x][y];
        }
        out << '\n';
    }

    out.close();
}

bool LoadGame(vector<vector<bool>>& roomsVisited, int& xCoord, int& yCoord)
{
    ifstream in;
    in.open("save.txt");

    if (!in.is_open())
    {
        return false;
    }

    in >> xCoord;
    in >> yCoord;

    char byte;
    roomsVisited.clear();
    in.get(byte);
    for (int x = 0; x < 5; x++)
    {
        vector<bool> temp = vector<bool>();
        while (in.get(byte))
        {
            if (byte != '\n')
            {
                temp.push_back((int)byte - 48);
            }
            else break;
        }
        roomsVisited.push_back(temp);
    }

    return true;
}
