// concession stand 'n stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <math.h>
using namespace std;

enum sizes {none, mini, medium, large};


int main()
{
    sizes popcorn = none;
    sizes drink = none;
    sizes candy = none;
    sizes poptart = none;
    float total = 0;
    float tax = 0.1;
    string choice;

    printf("welcome to the stand\n");
    _getch();
    system("CLS");
    printf("would you like some popcorn?\ny    n\n");
    cin >> choice;
    if (choice == "y")
    {
        system("CLS");
        printf("what size?\nS($2)  M($3)  L($5)\n");
        cin >> choice;
        if (choice == "s" || choice == "S")
        {
            total = total + 2;
            popcorn = mini;
        }
        else if (choice == "m" || choice == "M")
        {
            total = total + 3;
            popcorn = medium;
        }
        else if (choice == "l" || choice == "L")
        {
            total = total + 5;
            popcorn = large;
        }
    }

    _getch();
    system("CLS");
    printf("would you like a drink?\ny    n\n");
    cin >> choice;
    if (choice == "y")
    {
        system("CLS");
        printf("what size?\nS($1.50)  M($2.25)  L($4)\n");
        cin >> choice;
        if (choice == "s" || choice == "S")
        {
            total = total + 1.50;
            drink = mini;
        }
        else if (choice == "m" || choice == "M")
        {
            total = total + 2.25;
            drink = medium;
        }
        else if (choice == "l" || choice == "L")
        {
            total = total + 4;
            drink = large;
        }
    }
    while (1)
    {
    _getch();
    system("CLS");
    printf("would you like anything else?\ny    n\n");
    cin >> choice;
    if (choice == "y")
    {
        system("CLS");
        printf("great! we have candy and poptarts, which would you like?\n\n1. candy\n\n2. poptarts\n");
        cin >> choice;
        if (choice == "1")
        {
            system("CLS");
            printf("what size?\nS($1)  M($2)  L($3.50)\n");
            cin >> choice;
            if (choice == "s" || choice == "S")
            {
                total = total + 1;
                candy = mini;
            }
            else if (choice == "m" || choice == "M")
            {
                total = total + 2;
                candy = medium;
            }
            else if (choice == "l" || choice == "L")
            {
                total = total + 3.50;
                candy = large;
            }
        }
        else if (choice == "2")
        {
            system("CLS");
            printf("what size?\nS($1.50)  M($2.75)  L($4.25)\n");
            cin >> choice;
            if (choice == "s" || choice == "S")
            {
                total = total + 1.50;
                poptart = mini;
            }
            else if (choice == "m" || choice == "M")
            {
                total = total + 2.75;
                poptart = medium;
            }
            else if (choice == "l" || choice == "L")
            {
                total = total + 4.25;
                poptart = large;
            }
        }
    }
    else if (choice == "n")
    {
        break;
    }

    }
    printf("you bought:\n");
    if (popcorn == mini)
    {
        printf("small popcorn\n");
    }
    else if (popcorn == medium)
    {
        printf("medium popcorn\n");
    }
    else if (popcorn == large)
    {
        printf("large popcorn\n");
    }
    
    if (drink == mini)
    {
        printf("small drink\n");
    }
    else if (drink == medium)
    {
        printf("medium drink\n");
    }
    else if (drink == large)
    {
        printf("large drink\n");
    }

    if (candy == mini)
    {
        printf("small candy\n");
    }
    else if (candy == medium)
    {
        printf("medium candy\n");
    }
    else if (candy == large)
    {
        printf("large candy\n");
    }

    if (poptart == mini)
    {
        printf("small poptart\n");
    }
    else if (poptart == medium)
    {
        printf("medium poptart\n");
    }
    else if (poptart == large)
    {
        printf("large poptart\n");
    }

    cout << "your sub-total is: $" << total << endl;
    tax = total * tax;
    cout << "tax: $" << tax << endl;
    total = total + tax;
    cout << "your total is: $" << total;

    _getch();

    
    system("CLS");

    
    return 0;
}