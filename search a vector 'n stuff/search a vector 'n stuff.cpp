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
    string name;
    int age;
    int height;
    int weight;
    string phone;
};

int main()
{
    string input;
    ifstream search;
    search.open("vecSearch.txt");

    if (!search.is_open())
    {
        printf("file not found");
    }

    vector <info> vec;

    while (getline(search))
    {
        
    }


    if (vec[i].name == input)
    {
        cout << vec[i].name;
    }



    return 0;
}