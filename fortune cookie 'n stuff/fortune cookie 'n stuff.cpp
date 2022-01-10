
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
    
}