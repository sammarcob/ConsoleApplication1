
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
    int damage = 200;
    int health = 100;

};

int main()
{
    float num = 1.5;
    float num2 = 2.5;
    float num3 = 3.5;
    
    
    vector<float> numVec;
    vector<stats> vStats; cock

    stats enemy2;
    enemy2.damage = 1000;
    stats enemy1;
    numVec.push_back(num2);
    vStats.push_back(enemy1);
    vStats.push_back(enemy2);
    


    cout << vStats[0].health;

    return 0;
}