/*
Author: Brooks Sammarco
Project Name: ASCII art and animation
File Name: ASCII art and animation.cpp
Purpose: creates a museum with 3 exhibits that you can go through and look at (1 being animated)
Pseudocode: an if statement in a big while statement letting you choose which picture you want to look at, then after you see it, you
           have the option to break, or continue to the top of the while again.
Maintenance Log:
11/29/21: wrote everything 
11/30/21: wrote the comments
*/

#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
using namespace std;

int main()
{
    int choice;


    printf("welcome to the second art museum\n");
    printf("we have an assortment of pictures for you to look at\n");
    while (1)
    {
        system("CLS");
        printf("1. jelly fish\n2. whale\n3. swimmin fish\n\nplease input the number of the picture you want to see\n");
        cin >> choice;
        if (choice == 1)
        {
         printf("      _______      \n");
         printf(" ,-~~~       ~~~-, \n");
         printf("(                 )\n");
         printf(" \\_-, , , , , ,-_/ \n");
         printf("    / / | | \\ \\    \n");
         printf("    | | | | | |    \n");
         printf("    | | | | | |    \n");
         printf("   / / /   \\ \\ \\   \n");
         printf("   | | |   | | |   \n");
         system("CLS");
         printf("do you want to see more?\n");
         printf("1. yes\n2. no\n");
         cin >> choice;
         if (choice == 1)
         {
             continue;
         }
         else if (choice == 2)
         {
             break;
         }
         else
         {
             printf("bozo\n");
             break;
         }
        }
        else if (choice == 2)
        {
         printf("                  .      \n");
         printf("      `:'                \n");
         printf("    ___:____     |`\\/'|  \n");
         printf("  ,'        `.    \  /   \n");
         printf("  |  O        \___/  |   \n");
         printf("~^~^~^~^~^~^~^~^~^~^~^~^~\n");
         system("CLS");
         printf("do you want to see more?\n");
         printf("1. yes\n2. no\n");
         cin >> choice;
         if (choice == 1)
         {
             continue;
         }
         else if (choice == 2)
         {
             break;
         }
         else
         {
             printf("bozo\n");
             break;
         }
        }
        else if (choice == 3)
        {
        printf("|\\   \\\\\\\\__  \n");
        printf("| \\_/    o \\ \n"); 
        printf("> _   (( < _ \n");
        printf("| / \\__+___/ \n"); 
        printf("|/     |/    \n");
        Sleep(100);
        system("CLS");
        printf("|\\   \\\\\\\\__  \n");
        printf("| \\_/    o \\ \n");
        printf("> _   (( < _  o\n");
        printf("| / \\__+___/ \n");
        printf("|/     |/    \n");
        Sleep(100);
        system("CLS");
        printf("|\\   \\\\\\\\__  \n");
        printf("| \\_/    o \\   o\n");
        printf("> _   (( < _  o\n");
        printf("| / \\__+___/ \n");
        printf("|/     |/    \n");
        Sleep(100);
        system("CLS");
        printf("|\\   \\\\\\\\__   o\n");
        printf("| \\_/    o \\   o\n");
        printf("> _   (( < _  o\n");
        printf("| / \\__+___/ \n");
        printf("|/     |/    \n");

        system("CLS");
        printf("do you want to see more?\n");
        printf("1. yes\n2. no\n");
        cin >> choice;
        if (choice == 1)
        {
            continue;
        }
        else if (choice == 2)
        {
            break;
        }
        else
        {
            printf("bozo\n");
            break;
        }
        }
        else
        {
            printf("bozo\n");
            break;
        }
    }
    return 0;
}
