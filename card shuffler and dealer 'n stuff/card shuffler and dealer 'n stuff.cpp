
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

int shuffle()
{
    
    vector<int>cards;
    for (int i = 0; i < 51; i++)
    {
        cards.push_back(i);
    }

    for (int i = 51; i >= 0; i--)
    {
        int tempStore;
        int ran = (rand() % 52);
        cards[i] = tempStore;
        cards[i] = ran
    }
}

int main()
{
    srand(0);
    srand((unsigned)time(NULL));


    return 0;
}