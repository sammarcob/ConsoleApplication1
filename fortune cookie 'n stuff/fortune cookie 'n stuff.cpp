/*
Author: Brooks Sammarco
Project Name: fortune cookie
File Name: fortune cookie 'n stuff.cpp
Purpose: gives you a random fortune 
Pseudocode: has a random number generator that outputs a number that coorisponds to a fortune in a different function.
Maintenance Log:
1/7/22: wrote the fortunes
1/8/22: finished
*/

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

string fortuneCookie(int ranFortune)
{
    string fortune;
    
    

   

    switch (ranFortune)
    {
    case 1:
        fortune = "you will have good luck";
        break;
    case 2:
        fortune = "you will have bad luck";
        break;
    case 3:
        fortune = "you will smell good tomorrow";
        break;
    case 4:
        fortune = "you will find a lucky penny";
        break;
    case 5:
        fortune = "joey will call you cool in the near future";
        break;
    case 6:
        fortune = "watch your back";
        break;
    case 7:
        fortune = "rebember to be nice to people";
        break;
    case 8:
        fortune = "watch your step";
        break;
    case 9:
        fortune = "dont jump to conclusions";
        break;
    case 10:
        fortune = "do a good turn daily";
        break;
    }
    return fortune;
}

int main()
{
    string choice;
    
    
    bool yes = true;

    int min = 1;
    int max = 10;


    srand(0);
    srand((unsigned)time(NULL));
    

    while (yes = true)
    {
        system("CLS");
        
        printf("press enter to read your fortune\n");
        _getch();
        system("CLS");
        int ranFortune = min + rand() % (max - min + 1);
        string fortune = fortuneCookie(ranFortune);
        cout << fortune << endl;
        Sleep(100);
        printf("would you like to read another?\n\ny\n\nn\n");
        cin >> choice;
        if (choice == "y")
        {
            yes = true;
        }
        else if (choice == "n")
        {
            break;
        }
        
    }
    return 0;
}