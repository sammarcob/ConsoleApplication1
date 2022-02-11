
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

enum cardSuit { spades, diamonds, clubs, hearts };
enum cardColor { black, red };
enum designation { ace = 1, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king };

struct card
{
    cardSuit suit;
    cardColor color;
    int value;
    designation cDesignation;

};

int shuffle()
{
    
    vector<card>cards; //idk bro
    vector<int>randCards;
    for (int i = 0; i < 51; i++)
    {
        cards.push_back(i);
    }

    for (int i = 0; i < cards.size(); i++)
    {
        
        int ran = (rand() % cards.size());
        
        randCards.push_back(cards[ran]);
        cards.erase(cards.begin() + ran);

        
    }
}

int main()
{
    srand(0);
    srand((unsigned)time(NULL));


    return 0;
}