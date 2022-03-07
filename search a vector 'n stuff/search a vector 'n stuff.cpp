#define _USE_MATH_DEFINES
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

struct info
{
    int i;
    float f;
    string s;
    char c;
};

int main()
{
    vector <info> vec;

    if (!comma.is_open())
    {
        printf("comma file not found");
    }

    while (getline(comma, temp, ','))
    {
        info x;
        // all boned
        x.i = stoi(temp);
        tab << temp << "\t";

        getline(comma, temp, ',');

        x.f = stof(temp);
        tab << temp << "\t";

        getline(comma, temp, ',');

        x.s = temp;
        tab << temp << "\t";

        getline(comma, temp);

        x.c = temp[0];
        tab << temp << "\n";

        vec.push_back(x);
    }
    int respond;
    printf("what would you like to search?\nAge: 1\nHeight: 2\nWeight: 3\nPhone Number: 4\n");
    cin >> respond;

    if (respond == 1)


    return 0;
}