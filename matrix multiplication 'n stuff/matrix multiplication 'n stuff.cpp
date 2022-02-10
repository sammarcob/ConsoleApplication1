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
        {6, 14, 39},
        {67, 24, 7},
        {32, 46, 15}
    };

    vector <vector<int>> c;
    for (int i = 0; i < 3; i++)
    {
        vector<int> temp;
        for (int f = 0; f < 3; f++)
        {
            for (int r = 0; r < 3; r++)
            {
                temp[i] += a[f][r] * b[i][r];
            }
        }
    }

    return 0;
}