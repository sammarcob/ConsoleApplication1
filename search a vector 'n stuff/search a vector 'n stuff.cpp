#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <math.h>
#define _USE_MATH_DEFINE
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

    string fileInput;
    string input;
    
    ifstream search;
    search.open("vecSearch.txt");

    if (!search.is_open())
    {
        printf("file not found");
    }

    vector <info> vec;

    while (getline(search, fileInput, '\t'))
    {
        info mainInfo;
        mainInfo.name = fileInput;

        getline(search, fileInput, '\t');
        mainInfo.age = stoi(fileInput);

        getline(search, fileInput, '\t');
        mainInfo.height = stoi(fileInput);

        getline(search, fileInput, '\t');
        mainInfo.weight = stoi(fileInput);

        getline(search, fileInput, '\n');
        mainInfo.phone = fileInput;

        vec.push_back(mainInfo);
    }
    while (true)
    {
        printf("what would you like to search by?\n\nn = name\na = age\nh = height\nw = weight\np = phone\n");
        cin >> input;
        if (input == "n")
        {
            printf("what is your name: ");
            cin >> input;
            bool foundResult = false;
            for (int i = 0; i < vec.size(); i++)
            {
                if (vec[i].name == input)
                {
                    foundResult = true;
                    cout << "name: " << vec[i].name;
                    cout << "\tAge: " << vec[i].age;
                    cout << "\tHeight: " << vec[i].height;
                    cout << "\tWeight: " << vec[i].weight;
                    cout << "\tPhone #: " << vec[i].phone;
                }
            }
            if (!foundResult)
            {
                printf("no result found");
            }
        }
        if (input == "a")
        {
            printf("what is your age: ");
            cin >> input;
            bool foundResult = false;
            for (int i = 0; i < vec.size(); i++)
            {
                
                if (vec[i].age == stoi(input))
                {
                    foundResult = true;
                    cout << "name: " << vec[i].name;
                    cout << "\tAge: " << vec[i].age;
                    cout << "\tHeight: " << vec[i].height;
                    cout << "\tWeight: " << vec[i].weight;
                    cout << "\tPhone #: " << vec[i].phone;
                }
            }
            if (!foundResult)
            {
                printf("no result found");
            }
        }
        if (input == "h")
        {
            printf("what is your height: ");
            cin >> input;
            bool foundResult = false;
            for (int i = 0; i < vec.size(); i++)
            {
                if (vec[i].height == stoi(input))
                {
                    foundResult = true;
                    cout << "name: " << vec[i].name;
                    cout << "\tAge: " << vec[i].age;
                    cout << "\tHeight: " << vec[i].height;
                    cout << "\tWeight: " << vec[i].weight;
                    cout << "\tPhone #: " << vec[i].phone;
                }
            }
            if (!foundResult)
            {
                printf("no result found");
            }
        }
        if (input == "w")
        {
            printf("what is your weight: ");
            cin >> input;
            bool foundResult = false;
            for (int i = 0; i < vec.size(); i++)
            {
                if (vec[i].weight == stoi(input))
                {
                    foundResult = true;
                    cout << "name: " << vec[i].name;
                    cout << "\tAge: " << vec[i].age;
                    cout << "\tHeight: " << vec[i].height;
                    cout << "\tWeight: " << vec[i].weight;
                    cout << "\tPhone #: " << vec[i].phone;
                }
            }
            if (!foundResult)
            {
                printf("no result found");
            }
        }
        if (input == "p")
        {
            printf("what is your phone number: ");
            cin >> input;
            bool foundResult = false;
            for (int i = 0; i < vec.size(); i++)
            {
                if (vec[i].phone == input)
                {
                    foundResult = true;
                    cout << "name: " << vec[i].name;
                    cout << "\tAge: " << vec[i].age;
                    cout << "\tHeight: " << vec[i].height;
                    cout << "\tWeight: " << vec[i].weight;
                    cout << "\tPhone #: " << vec[i].phone;
                }
            }
            if (!foundResult)
            {
                printf("no result found");
            }
        }
        printf("\nwould you like to enter another?\n(y/n)\n");
        cin >> input;
        if (input == "y")
        {
            system("CLS");
            continue;
        }
        else if (input == "n")
        {
            break;
        }
    }

    return 0;
}