/*
Project Name: Bred game
Author: Brooks Sammarco
File Name: Bred game.cpp
Purpose: plays a game that has a lot of bred in it
Pseudocode: bred
Matinence Log:
3/28/22: restarted
*/



#define _USE_MATH_DEFINES
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <fstream>
#include "Functions.h"
using namespace std;

#include "npc.h"

struct npcData
{
    string name = "";
    int eHealth = 0;
    int eDamage = 0;
};

int main()
{
    npc NPC;
    title();

    vector <npcData> npc(5);
    

    NPC.jelly(eHealth, eDamage, name);
    //AHHHHHHHHHHHH BRUH 
    cout << eHealth << eDamage;

    return 0;
}