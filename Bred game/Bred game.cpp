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
using namespace std;

#include "Functions.h"
#include "npc.h"
#include "nd.h"


int main()
{
    srand((unsigned)time(NULL));
    globalVariables globeVar;

    npcData nd;

    npc temp;

    for (int i = 0; i < 6; i++)
    {
        globeVar.npcs.push_back(temp);
    }

    globeVar.npcs[0].setData("Jelly", 7, 5);
    globeVar.npcs[0].addPhrase("...");
    globeVar.npcs[1].setData("Jam", 8, 4);
    globeVar.npcs[1].addPhrase("yoo what's up man wana go surfing?");
    globeVar.npcs[2].setData("Butter", 4, 2);
    globeVar.npcs[2].addPhrase("HEY HEY HEY HEY YO YO YOOOOOOOO WOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO");
    globeVar.npcs[3].setData("Chad", 10, 6);
    globeVar.npcs[3].addPhrase("dude. what's up dude. hey dude why are you looking at me like that dude?");
    globeVar.npcs[4].setData("Molassas", 15, 3);
    globeVar.npcs[4].addPhrase("h-h-h-h-h-h-h-e-e-e-e-e-e-e-e-e-e-y-y-y-y-y-y-y-y-y...        m-m-m-m-m-m-m-m-m-a-a-a-a-a-n-n-n-n-n-n...");
    globeVar.npcs[5].setData("Peanut Butter", 20, 0);
    globeVar.npcs[5].addPhrase("hello my child.");
    

    GameManager(globeVar);
    

    return 0;
}