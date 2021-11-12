/*

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
    string decision;

    printf("welcome to the maaaazzzeee\n");
    printf("enter your name to enter the maaaaazzzeee\n");
    cin >> name;
    system("CLS");
    printf("ok, %s", name.c_str());
    printf("-press any key to continue-");
    _getch();
    system("CLS");

    printf("right\ndown\n");
    cin >> decision;
    if (decision == "right")
    {
        system("CLS");
        printf("right\ndown\n");
        cin >> decision;
        if (decision == "right")
        {
            system("CLS");
            printf("you reached a dead end\n");
            return 0;
        }
        else if (decision == "down")
        {
            system("CLS");
            printf("left\nright\n");
            cin >> decision;
            if (decision == "right")
            {
                system("CLS");
                printf("you reached a dead end\n");
                return 0;
            }
            else if (decision == "left")
            {
                system("CLS");
                printf("down\n");
                cin >> decision;
                if (decision == "down")
                {
                    system("CLS");
                    printf("right\n");
                    cin >> decision;
                    if (decision == "right");
                    {
                        system("CLS");
                        printf("right\n");
                        cin >> decision;
                        if (decision == "right")
                        {
                            system("CLS");
                            printf("you win");
                            return 0;
                        }
                    }
                }
            }

        }
    }
    else if (decision == "down")
    {
        system("CLS");
        printf("right\ndown\n");
        cin >> decision;
        if (decision == "right")
        {
            system("CLS");
            printf("right\nup\n");
            cin >> decision;
            if (decision == "right")
            {
                system("CLS");
                printf("good job bozo you lost\n");
                return 0;
            }
            else if (decision == "up")
            {
                system("CLS");
                printf("right\nleft\n");
                cin >> decision;
                if (decision == "right")
                {
                    system("CLS");
                    printf("good job bozo it's a dead end\n");
                    return 0;
                }
                else if (decision == "left")
                {
                    system("CLS");
                    printf("dead end bozo\n");
                    return 0;
                }
            }
        }
        else if (decision == "down")
        {
            system("CLS");
            printf("right\n");
            cin >> decision;
            if (decision == "right")
            {
                system("CLS");
                printf("right");
                cin >> decision;
                if (decision == "right")
                {
                    system("CLS");
                    printf("Good job you win\n");
                    return 0;
                }
            }
        }
    }
}
