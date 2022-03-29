#pragma once

#include <windows.h>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;


void title()
{
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    Sleep(5);                          
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    Sleep(10);                         
    printf("        |            |     \n");
    Sleep(30);                         
    printf("        --------------     \n");
    Sleep(70);                         
    system("CLS");                     
                                       
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  __    __  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    Sleep(30);                         
    system("CLS");                     
                                       
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    Sleep(40);                         
    system("CLS");                     
                                       
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    Sleep(60);                         
    printf("                           \n");
    printf(" ____                      \n");
    printf("|    |                     \n");
    printf("|____|                     \n");
    printf("|    |                     \n");
    printf("|____|                     \n");
    Sleep(60);                         
    system("CLS"); 
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    printf(" ____   ____               \n");
    printf("|    | |    |              \n");
    printf("|____| |____|              \n");
    printf("|    | | \\                 \n");
    printf("|____| |  \\                \n");
    Sleep(60);                         
    system("CLS");
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    printf(" ____   ____   ____        \n");
    printf("|    | |    | |            \n");
    printf("|____| |____| |____        \n");
    printf("|    | | \\    |            \n");
    printf("|____| |  \\   |____        \n");
    Sleep(60);
    system("CLS");
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("        |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    printf(" ____   ____   ____   ___  \n");
    printf("|    | |    | |      |   \ \n");
    printf("|____| |____| |____  |    |\n");
    printf("|    | | \\    |      |    |\n");
    printf("|____| |  \\   |____  |___/ \n");
    Sleep(100);
    system("CLS");
    printf("        ______________     \n");
    printf("       (              )    \n");
    printf("             |            |     \n");
    printf("        |  ()    ()  |     \n");
    printf("        |            |     \n");
    printf("    |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    printf(" ____   ____   ____   ___  \n");
    printf("|    | |    | |      |   \ \n");
    printf("   |____| |____| |____  |    |\n");
    printf("|    | | \\   |      |    |\n");
    printf("    |____| |  \\  |____  |___/ \n");
    Sleep(10);
    system("CLS");
    printf("        _____    _________     \n");
    printf("   (              )    \n");
    printf("             |            |     \n");
    printf("        |  (  ) ()  |     \n");
    printf("                 |            |     \n");
    printf("    |            |     \n");
    printf("        |            |     \n");
    printf("        --------------     \n");
    printf("       ____  __   ____   ___  \n");
    printf("|    | |    | |      |   \ \n");
    printf("   |____| |__   __| |____  |    |\n");
    printf("|    | | \\   |      |    |\n");
    printf("    |___  _|   |  \\  |      ____  |___/ \n");
    Sleep(5);
    system("CLS");
    printf("        _____    ____     __    ___     \n");
    printf("   (              )        \n");
    printf("             |            |     \n");
    printf("        |  (  )           (   )  |     \n");
    printf("                     |            |     \n");
    printf("    |                      |     \n");
    printf("        |            |     \n");
    printf("        -----      ---      ------     \n");
    printf("       ____  __   __       __   ___  \n");
    printf("|    | |    |        |      |   \ \n");
    printf("   |____|              |__   __| |____  |    |\n");
    printf("|    |         | \\   |      |    |\n");
    printf("    |___  _|   |  \\  |      ____  |___/ \n");
    system("CLS");
    Sleep(130);


    
}

void menu()
{
    
    string input;
    bool credits = false;
    bool start = false;
    while (true)
    {


        system("CLS");
        printf("Use a and d to switch between options. press space to select\n");
        printf("Start||||||||||Credits\n");
        printf("^^^^^                 \n");
        while (true)
        {
            _flushall();
            input = _getch();

            if (input == "a" || input == "A")
            {
                system("CLS");
                printf("Use a and d to switch between options. press space to select\n");
                printf("Start||||||||||Credits\n");
                printf("^^^^^                 \n");

                start = true;
                credits = false;
            }
            else if (input == "d" || input == "D")
            {
                system("CLS");
                printf("Use a and d to switch between options. press space to select\n");
                printf("Start||||||||||Credits\n");
                printf("               ^^^^^^^\n");

                start = false;
                credits = true;
            }
            else if (input == " " || input == "\n")
            {
                break;
            }
        }
        if (credits == true)
        {
            printf("Code by Brooks Sammarco\n\n\n");
            printf("Story by Brooks Sammarco\n\n\n");
            printf("Coolness by Brooks Sammarco\n\n\n");

            printf("gumby\n");
            Sleep(100);
            printf("gumby\n");
            Sleep(80);
            printf("gumby\n");
            Sleep(60);
            printf("gumby\n");
            Sleep(40);
            printf("gumby\n");
            Sleep(20);
            printf("gumby\n");
            Sleep(10);
            printf("gumby\n");
            Sleep(9);
            printf("gumby\n");
            Sleep(8);
            printf("gumby\n");
            Sleep(7);
            printf("gumby\n\n\n");
            Sleep(1000);
            printf("gumby\n");

            printf("press any key to continue\n");
            _getch();
            system("CLS");
            // this stuff is boned probably idk
            credits = false;
            start = true;
            continue;
        }
    }
}

void credits()
{
    printf("Code by Brooks Sammarco\n\n\n");
    printf("Story by Brooks Sammarco\n\n\n");
    printf("Coolness by Brooks Sammarco\n\n\n");

    printf("gumby\n");
    Sleep(100);
    printf("gumby\n");
    Sleep(80);
    printf("gumby\n");
    Sleep(60);
    printf("gumby\n");
    Sleep(40);
    printf("gumby\n");
    Sleep(20);
    printf("gumby\n");
    Sleep(10);
    printf("gumby\n");
    Sleep(9);
    printf("gumby\n");
    Sleep(8);
    printf("gumby\n");
    Sleep(7);
    printf("gumby\n\n\n");
    Sleep(1000);
    printf("gumby\n");

    printf("press any key to continue\n");
    _getch();
    system("CLS");
    credits = false;
    start = true;
    continue;
}