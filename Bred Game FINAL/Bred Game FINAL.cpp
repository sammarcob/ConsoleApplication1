
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


void characterBuilder(PlayerStats& player);
bool mainMenu();
bool rooms();

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
    PlayerStats player;
    characterBuilder(player);
    
    int xCoord = 0;
    int yCoord = 4;
    bool foundRoom25 = false;
    int keyChance = 0;
    bool blueKey = false;
    string choice;

    vector<vector<bool>> isCleared;

    for (int x = 0;x < 5; x++)
    {
        vector<bool> temp;
        for (int y = 0; y < 5; y++)
        {
            temp.push_back(false);
        }
        isCleared.push_back(temp);
    }

    while (!foundRoom25)
    {
        if (xCoord == 0 && yCoord == 4)
        {
            foundRoom25;
        }
        system("CLS");
        cout << xCoord << ", " << yCoord; //displays coords
        cout << "you walk into the room" << "\n";
        _getch();
        system("CLS");
        
        if (isCleared[xCoord][yCoord] == false)
        {
        
        //spawn monster
        //if statement for if player health drops to 0 you exit out of loop
            isCleared[xCoord][yCoord] = true;
        }
        else
        {
            cout << "The room is empty...\n\nIt looks like you've been here before...";
        }
        system("CLS");

        // blue key 
        if (blueKey == false)
        {
            keyChance = 1 + rand() % 2;
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
    }
    return false;
}

void characterBuilder(PlayerStats& player)
{
    
    int choice;
    
    while (true)
    {
        system("CLS");
        cout << "Before you embark you need to choose your spreading utensil!\nChoose carefully!\n\n-Press any key to continue-";
        _getch();
        system("CLS");

        cout << "1. Butter Knife: Damage(12)   Dodge chance(10%)\n\n2. Spoon: Damage(6)   Dodge chance(45%)\n\n3. Fork: Damage(9)  Dodge chance(30%)\n\n\nType your awnser below, then hit enter:\n";
        cin >> choice;

        if (choice == 1)
        {
            printf("Oh, the knife!\nGreat choice, but remember, you might have a lot of attacking power, but you don't have a ton of agility!\n");
            _getch();
            player.attackDamage = 12;
            player.dodgeChance = 0.10;
            choice = 0;
            break;
        }
        else if (choice == 2)
        {
            printf("Oh, the Spoon!\nGreat choice, but remember, you might have a lot of agility don't have a ton of attacking power!\n");
            _getch();
            player.attackDamage = 6;
            player.dodgeChance = 0.45;
            choice = 0;
            break;
        }
        else if (choice == 3)
        {
            printf("Oh, the Fork...\nGreat choice... kind of average, but good choice I guess\n");
            _getch();
            player.attackDamage = 9;
            player.dodgeChance = 0.30;
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
            player.dodgeChance = 1.0;
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
    
    
}
