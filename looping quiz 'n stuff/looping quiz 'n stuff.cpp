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
    string id;
    string ans;

    printf("welcome to the dumber balance quiz\n");
    printf("please input your name: \n");
    cin >> name;
    
  system("CLS");
  printf("please input your ID (numbers)\n");
  cin >> id; 
    while (1) {
        system("CLS");
        printf("Q1. what is the capital of washington?\n");
        printf("1. beijing\n2. olympia\n3. zimbabwe");
        cin >> ans;
        system("CLS");
        if (ans == "1")
        {

            printf("wrong awnser bozo\n");
            _getch();
            continue;
        }
        else if (ans == "2")
        {
            printf("good job");
            _getch();
            break;
        }
        else if (ans == "3")
        {
            printf("wrong awnser bozo");
            _getch();
            continue;
        }
        else
        {
            break;
        }
    }

    while (1) {
        system("CLS");
        printf("Q2. where does light dependant photosynthesis occur?\n");
        printf("1. Cell wall\n2. Centeral Vacuole\n3. Thylakoid membrane\n");
        cin >> ans;
        system("CLS");
        if (ans == "1")
        {
            printf("wrong awnser bozo\n");
            _getch();
            continue;
        }
        else if (ans == "2")
        {
            printf("wrong awnser bozo\n");
            _getch();
            continue;
        }
        else if (ans == "3")
        {
            printf("good job. looks like you aint the bozo i thought you were\n");
            _getch();
            break;
        }
        else
        {
            break;
        }
    }
    system("CLS");

    while (1)
    {
        system("CLS");
        printf("Q3. what is your ID? (we lied about every questions being multiple choice)\n");
        cin >> ans;
        system("CLS");
        if (ans == id)
        {
            printf("good job. you win test\n");
            _getch();
            break;
        }
        else if (ans < id)
        {
            printf("lmao bad\n");
            _getch();
            continue;
        }
        else if (ans > id)
        {
            printf("lmao bad");
            _getch();
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}

