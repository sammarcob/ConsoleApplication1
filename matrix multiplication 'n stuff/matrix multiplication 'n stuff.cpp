/*
Author: Brooks Sammarco
Project Name: matrix multiplication
File Name: matrix multiplication 'n stuff.cpp
Purpose: gives you a random fortune
Pseudocode: multiplaisasd vector yada yada
Maintenance Log:
2/16/22: wrote the whole thing
*/
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

int main()
{
    vector < vector<int>> a
    {
        {4, 5, 6},
        {3, 7, 9},
        {2, 6, 5}
    };

    vector < vector<int>> b
    {
        {6, 4, 9},
        {6, 2, 7},
        {3, 4, 5}
    };

    /*vector < vector<int>> a
    {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };*/

    vector <vector<int>> c
    {

        { 0, 0, 0 },
        { 0, 0, 0 },
        { 0, 0, 0 }
    };

    for (int row = 0; row < 3; row++)
    {
        
        
        for (int col = 0; col < 3; col++)
        {
            for (int r = 0; r < 3; r++)
            {
                c[row][col] += a[row][r] * b[col][row];
            }
            
        }
        
    }

    for (int i = 0; i < c.size(); i++)
    {
        for (int george = 0; george < c[i].size(); george++)
        {
            cout << c[i][george] << '\t';
        }
        cout << "\n";
    }

    return 0;
}