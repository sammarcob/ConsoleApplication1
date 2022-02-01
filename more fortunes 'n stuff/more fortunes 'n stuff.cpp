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



int ran()
{
    int i;
    srand(0);
    srand((unsigned)time(NULL));
    int min = 1;
    int max = 20;

    i = min + rand() % (max - min + 1);

    

    return i;
}

int main()
{

    string choice;
    bool yes = true;
    vector<string>fort{ "do a good turn daily", "dont jump to conclusions", "watch your step", "rebember to be nice to people", "watch your back",
                        "joey will call you cool in the near future", "you will find a lucky penny", "you will smell good tomorrow", "you will have bad luck", "you will have good luck",
                        "the end is nigh", "follow your dreams", "your friend will call you", "a dubious friend may be an enemy in camouflage", "a fresh start will put you on your way",
                        "a lifetime of happiness lies ahead of you", "a lifetime friend shall soon be made", "all the effort you are making will ultimately pay off", 
                        "all the troubles you have will pass away very quickly", "an important person will offer you support" }; //20 fortunes

   
    while (1 < 2)
    {
        int i = ran();
        cout << fort[i] << endl;
        _getch();
        system("CLS");
        
        printf("would you like to read another?\n y / n\n");
        cin >> choice;
        system("CLS");
        if (choice == "y")
        {
            continue;
        }
        else if (choice == "n")
        {
            break;
        }

    }
    
    
    return 0;
}