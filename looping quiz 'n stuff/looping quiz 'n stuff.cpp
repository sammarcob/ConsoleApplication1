/*
Author: Brooks Sammarco
Project Name: looping quiz
File Name: looping quiz'n stuff.cpp
Purpose: make a quiz that loops you back so you get every question right 
Pseudocode: 
Maintenance Log:
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
    int id;
    int ans;

    printf("welcome to the dumber balance quiz\n");
    printf("please input your name: \n");
    cin >> name;
    system("CLS");
    printf("please input your ID\n");
    cin >> id;
    printf("the test will commence shortly\n");
    printf("-press any key to continue-\n");
    _getch();
    system("CLS");

    while (1 < 2) {

        printf("what is the capital of washington?\n");
        printf("1. beijing\n2. olimpia\n3. zimbabwe");
        cin >> ans;
        if (ans == 1)
        {
            system("CLS");
            printf("wrong awnser bozo\n");
            continue;
        }
        else if (ans == 2)
        {
            system("CLS");
            good job
        }
    }
}

