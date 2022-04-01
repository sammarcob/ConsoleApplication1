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



int main()
{
    npc n;
    title();
    
    
    string jellyName = "";
    int eHealth = 0;
    int eDamage = 0;

    n.jelly(eHealth, eDamage, jellyName);

    return 0;
}