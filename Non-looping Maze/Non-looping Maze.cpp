/*

*/

#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
    string name;
    string decision;

    printf("welcome to the maaaazzzeee\n");
    printf("enter your name to enter the maaaaazzzeee\n");
    cin >> name;
    system("CLS");
    printf("ok, %s", name.c_str());
    printf("-press any key to continue-");
    _getch();
    system("CLS");

    printf("1. right\n2. down\n");
    cin >> decision;
    if (decision == "right")
    {
        system("CLS");
        printf("1. right\n2. down\n");
        cin >> decision;
        if (decision == "right")
        {
            printf("you reached a dead end");
            return 0;
        }
    }
    else if (decision == "down")
    {
        system("CLS");
        printf("1. right\n2. down\n");
        cin >> decision;
    }


 

    return 0;