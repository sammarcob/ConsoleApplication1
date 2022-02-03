/*
Author: Brooks Sammarco
Project Name: multiplication table flash cards
File Name: multiplication table flash cards 'n stuff.cpp
Purpose: quizzes you on your multiplication tables
Pseudocode: 
Maintenance Log:
2/3/22: 
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

int main()
{
    vector<vector<int>>numbers;
    for (int i = 1; i < 12; i++)
    {
        vector<int>temp;
        for (int f = 1; f < 12; f++)
        {
            temp.push_back(f);
        }
    }

    return 0;
}