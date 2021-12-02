/*
Author: Brooks Sammarco
Project Name: switch somputer programming quiz
File Name: switch computer programming quiz 'n stuff.cpp
Purpose: write a multiple choice computer programming quiz with switch
Pseudocode: write code that asks for a name, states 3 questions with 4 awnsers per question that affect an overall score that is
            displayed at the end of the quiz using switch.
Maintenance Log:
10/20/21: wrote out two of the three questions
10/21/21: finish code and comments
*/


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    string name;
    int ans1 = 0;
    int ans2;
    int ans3;
    float score = 0;

    printf("please input your name\n");
    cin >> name;
    printf("ok %s, the test will commence shortly\n", name.c_str());
    printf("-press any button to start-");
    _getch();
    system("CLS");

    printf("- please input the code to print a sentence:\n");
    printf("1. say(hello);\n");
    printf("2. printf(\"hello\");\n");
    printf("3. tell=*hello*:\n");
    printf("4. bozo.bozo@bozo.com       bozo\n");
    cin >> ans1;
    switch (ans1)
    {
    case 1:
        printf("wrong awnser bozo\n");
        score = score - 0.25;
        break;
    case 2:
        printf("correct\n");
        score = score + 1;
        break;
    case 3:
        printf("wrong awnser bozo\n");
        score = score - 0.25;
        break;
    case 4:
        printf("wrong awnser bozo\n");
        score = score - 0.25;
        break;
    }
    system("CLS");

    printf("- please input number the code that tells the code that it has ended:\n");
    printf("1. end;\n 2. stop\n 3. return 0;\n 4. dont'n\n");
    cin >> ans2;
    switch (ans2)
    {
    case 1:
        printf("wrong awnser bozo\n");
        score = score - 0.25;
        break;
    case 2:
        printf("wrong awnser bozo\n");
        score = score - 0.25;
        break;
    case 3:
        printf("correct\n");
        score = score + 1;
        break;
    case 4:
        printf("wrong awnser bozo\n");
        score = score - 0.25;
        break;
    }
    system("CLS");

    printf("- please input the number next to the code to change the name of a variable:\n");
    printf("1. intchange**\n 2. cin >>\n 3. switch,\n 4. convertg;;\n");
    cin >> ans3;
    switch (ans3)
    {
    case 1:
        printf("wrong awnser bozo\n");
        score = score - 0.25;
        break;
    case 2:
        printf("correct\n");
        score = score + 1;
        break;
    case 3:
        printf("wrong awnser bozo\n");
        score = score - 0.25;
        break;
    case 4:
        printf("wrong awnser bozo\n");
        score = score - 0.25;
        break;
    }
    system("CLS");

    if (score < 0)
    {
        printf("nice job bozo you got %f", score);
    }
    else if (score > 0)
    {
        printf("good job %s, you got %f points", name.c_str(), score);
    }
    return 0;
}
