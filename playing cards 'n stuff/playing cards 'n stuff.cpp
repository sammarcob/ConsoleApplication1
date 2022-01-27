
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

enum cardSuit {spades, diamonds, clubs, hearts};
enum cardColor {black, red};

struct card
{
    cardSuit suit;
    cardColor color;
    int value;


};

card randCard(int seed)
{
    
    int min = 1;
    int max = 52;
    int randNum;
    randNum = min + seed % (max - min + 1);

    card newCard;

    newCard.suit = (cardSuit)(randNum % 4);
    newCard.value = (randNum % 13) + 1;
    newCard.color = (cardColor)(randNum % 2);

    
    return newCard;
}

void cardStats(card c)
{
    printf(" you got a ");
    if (c.color == red)
    {
        printf("red ");
    }
    else if (c.color == black)
    {
        printf("black ");
    }
    cout << c.value;

    if (c.suit == spades)
    {
        printf(" of spades");
    }
    else if (c.suit == diamonds)
    {
        printf(" of diamonds");
    }
    else if (c.suit == clubs)
    {
        printf(" of clubs");
    }
    else if (c.suit == hearts)
    {
        printf(" of hearts");
    }
}


int main()
{
    srand((unsigned)time(NULL));
    card c = randCard(rand());
    
    cardStats(c);
    Sleep(10);
    c = randCard(rand());
    cout << "\n";
    cardStats(c);
    Sleep(10);
    c = randCard(rand());
    cout << "\n";
    cardStats(c);
    Sleep(10);
    c = randCard(rand());
    cout << "\n";
    cardStats(c);
    Sleep(10);
    c = randCard(rand());
    cout << "\n";
    cardStats(c);


    _getch();

    return 0;
}