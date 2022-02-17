
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINE
using namespace std;

enum cardSuit { spades, diamonds, clubs, hearts };
enum cardColor { black, red };
enum designation { ace, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king };

struct card
{
    cardSuit suit;
    cardColor color;
    designation cDesignation;

};

vector<card> shuffle()
{
    card newCard;
    vector<card>cards; 
    vector<card>randCards;
    
    for (int v = 0; v < 13; v++)
    {
        newCard.cDesignation = (designation)v;

        for (int s = 0; s < 4; s++)
        {
            newCard.suit = (cardSuit)s;
            cards.push_back(newCard);
        }
        
    }

    while (cards.size() > 0)
    {
        
        int ran = (rand() % cards.size());
        
        randCards.push_back(cards[ran]);
        cards.erase(cards.begin() + ran);

        
    }
    
    
    return randCards;
}

int main()
 {
    srand(0);
    srand((unsigned)time(NULL));
    vector<vector<card>> hands;
    vector<card> sDeck = shuffle();
    
    vector<card>temp;
    hands.push_back(temp);
    hands.push_back(temp);
    hands.push_back(temp);
    hands.push_back(temp);

    for (int i = 0; i < 51; i++)
    {
        
        hands[i % 4].push_back(sDeck[i]);
    }
    
    
    printf("hand 1: \n");
    for (int i = 0; i < 12; i++)
    {
        if (hands[0][i].cDesignation == ace)
        {
            printf("ace ");
        }
        else if (hands[0][i].cDesignation == two)
        {
            printf("two ");
        }
        else if (hands[0][i].cDesignation == three)
        {
            printf("three ");
        }
        else if (hands[0][i].cDesignation == four)
        {
            printf("four ");
        }
        else if (hands[0][i].cDesignation == five)
        {
            printf("five ");
        }
        else if (hands[0][i].cDesignation == six)
        {
            printf("six ");
        }
        else if (hands[0][i].cDesignation == seven)
        {
            printf("seven ");
        }
        else if (hands[0][i].cDesignation == eight)
        {
            printf("eight ");
        }
        else if (hands[0][i].cDesignation == nine)
        {
            printf("nine ");
        }
        else if (hands[0][i].cDesignation == ten)
        {
            printf("ten ");
        }
        else if (hands[0][i].cDesignation == jack)
        {
            printf("jack ");
        }
        else if (hands[0][i].cDesignation == queen)
        {
            printf("queen ");
        }
        else if (hands[0][i].cDesignation == king)
        {
            printf("king ");
        }

        if (hands[0][i].suit == spades)
        {
            printf("of spades(black), ");
        }
        else if (hands[0][i].suit == diamonds)
        {
            printf("of diamonds(red), ");
        }
        else if (hands[0][i].suit == clubs)
        {
            printf("of clubs(black), ");
        }
        else if (hands[0][i].suit == hearts)
        {
            printf("of hearts(red),");
        }
    }
    _getch();
    system("CLS");
    printf("hand 2: \n"); // basically the same thing, but for hand 2
    for (int i = 0; i < 12; i++)
    {
        if (hands[1][i].cDesignation == ace)
        {
            printf("ace ");
        }
        else if (hands[1][i].cDesignation == two)
        {
            printf("two ");
        }
        else if (hands[1][i].cDesignation == three)
        {
            printf("three ");
        }
        else if (hands[1][i].cDesignation == four)
        {
            printf("four ");
        }
        else if (hands[1][i].cDesignation == five)
        {
            printf("five ");
        }
        else if (hands[1][i].cDesignation == six)
        {
            printf("six ");
        }
        else if (hands[1][i].cDesignation == seven)
        {
            printf("seven ");
        }
        else if (hands[1][i].cDesignation == eight)
        {
            printf("eight ");
        }
        else if (hands[1][i].cDesignation == nine)
        {
            printf("nine ");
        }
        else if (hands[1][i].cDesignation == ten)
        {
            printf("ten ");
        }
        else if (hands[1][i].cDesignation == jack)
        {
            printf("jack ");
        }
        else if (hands[1][i].cDesignation == queen)
        {
            printf("queen ");
        }
        else if (hands[1][i].cDesignation == king)
        {
            printf("king ");
        }

        if (hands[1][i].suit == spades)
        {
            printf("of spades(black), ");
        }
        else if (hands[1][i].suit == diamonds)
        {
            printf("of diamonds(red), ");
        }
        else if (hands[1][i].suit == clubs)
        {
            printf("of clubs(black), ");
        }
        else if (hands[1][i].suit == hearts)
        {
            printf("of hearts(red), ");
        }
    }
    _getch();
    system("CLS");
    printf("hand 3: \n"); // basically the same thing, but for hand 3
    for (int i = 0; i < 12; i++)
    {
        if (hands[2][i].cDesignation == ace)
        {
            printf("ace ");
        }
        else if (hands[2][i].cDesignation == two)
        {
            printf("two ");
        }
        else if (hands[2][i].cDesignation == three)
        {
            printf("three ");
        }
        else if (hands[2][i].cDesignation == four)
        {
            printf("four ");
        }
        else if (hands[2][i].cDesignation == five)
        {
            printf("five ");
        }
        else if (hands[2][i].cDesignation == six)
        {
            printf("six ");
        }
        else if (hands[2][i].cDesignation == seven)
        {
            printf("seven ");
        }
        else if (hands[2][i].cDesignation == eight)
        {
            printf("eight ");
        }
        else if (hands[2][i].cDesignation == nine)
        {
            printf("nine ");
        }
        else if (hands[2][i].cDesignation == ten)
        {
            printf("ten ");
        }
        else if (hands[2][i].cDesignation == jack)
        {
            printf("jack ");
        }
        else if (hands[2][i].cDesignation == queen)
        {
            printf("queen ");
        }
        else if (hands[2][i].cDesignation == king)
        {
            printf("king ");
        }

        if (hands[2][i].suit == spades)
        {
            printf("of spades(black), ");
        }
        else if (hands[2][i].suit == diamonds)
        {
            printf("of diamonds(red), ");
        }
        else if (hands[2][i].suit == clubs)
        {
            printf("of clubs(black), ");
        }
        else if (hands[2][i].suit == hearts)
        {
            printf("of hearts(red),");
        }
    }//
    _getch();
    system("CLS");
    printf("hand 4: \n"); // basically the same thing, but for hand 4
    for (int i = 0; i < 12; i++)
    {
        if (hands[3][i].cDesignation == ace)
        {
            printf("ace ");
        }
        else if (hands[3][i].cDesignation == two)
        {
            printf("two ");
        }
        else if (hands[3][i].cDesignation == three)
        {
            printf("three ");
        }
        else if (hands[3][i].cDesignation == four)
        {
            printf("four ");
        }
        else if (hands[3][i].cDesignation == five)
        {
            printf("five ");
        }
        else if (hands[3][i].cDesignation == six)
        {
            printf("six ");
        }
        else if (hands[3][i].cDesignation == seven)
        {
            printf("seven ");
        }
        else if (hands[3][i].cDesignation == eight)
        {
            printf("eight ");
        }
        else if (hands[3][i].cDesignation == nine)
        {
            printf("nine ");
        }
        else if (hands[3][i].cDesignation == ten)
        {
            printf("ten ");
        }
        else if (hands[3][i].cDesignation == jack)
        {
            printf("jack ");
        }
        else if (hands[3][i].cDesignation == queen)
        {
            printf("queen ");
        }
        else if (hands[3][i].cDesignation == king)
        {
            printf("king ");
        }

        if (hands[3][i].suit == spades)
        {
            printf("of spades(black), ");
        }
        else if (hands[3][i].suit == diamonds)
        {
            printf("of diamonds(red), ");
        }
        else if (hands[3][i].suit == clubs)
        {
            printf("of clubs(black), ");
        }
        else if (hands[3][i].suit == hearts)
        {
            printf("of hearts(red),");
        }
    } //
    _getch();
    system("CLS");
    

    return 0;
}