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

    npc Jelly;
    Jelly.setData("Jelly", 7, 5);
    Jelly.addPhrase("...");

    npc Jam;
    Jam.setData("Jam", 8, 4);
    Jam.addPhrase("yoo what's up man wana go surfing?");

    npc Butter;
    Butter.setData("Butter", 4, 2);
    Butter.addPhrase("HEY HEY HEY HEY YO YO YOOOOOOOO WOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO");

    npc Chad;
    Chad.setData("Chad", 10, 6);
    Chad.addPhrase("dude. what's up dude. hey dude why are you looking at me like that dude?");

    npc Molassas;
    Molassas.setData("Molassas", 15, 3);
    Molassas.addPhrase("h-h-h-h-h-h-h-e-e-e-e-e-e-e-e-e-e-y-y-y-y-y-y-y-y-y...        m-m-m-m-m-m-m-m-m-a-a-a-a-a-n-n-n-n-n-n...");

    npc peanutButter;
    peanutButter.setData("Peanut Butter", 20, 0);
    peanutButter.addPhrase("hello my child.");

    GameManager(globeVar);
    
    

    return 0;
}