/*
Author: Brooks Sammarco
Project Name: personal data
File Name: personal data 'n stuff.cpp
Purpose: collects and varifies personal info 
Pseudocode: has a struct that has strings and ints for the data. inside a big while loop, the main function asks for the user to input the data cia cin, then the data 
is read back to them before asking if the data is correct. if it is, it breaks and returns 0, if the user says its incorrect, it continues the while loop and has them put the data in again.
Maintenance Log:
1/22/22: wrote it all.
*/

#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

struct pData
{
    string firstName;
    string midName;
    string lastName;
    int age;
    string phoneNum;
};

int main()
{
    string verify;
    struct pData d;
    printf("welcome to the NotAnIPGrabber data bank\nPress any button to continue\n");
    _getch();
    while (1 < 2)
    {
        system("CLS");
        printf("what is your first name?\n");
        cin >> d.firstName;
        system("CLS");
        printf("what is your middle name?\n");
        cin >> d.midName;
        system("CLS");
        printf("what is your last name?\n");
        cin >> d.lastName;
        system("CLS");
        printf("what is your age?\n");
        cin >> d.age;
        system("CLS");
        printf("what is your phone number?\n");
        cin >> d.phoneNum;
        system("CLS");
        printf("alright. we will now verify if your data is correct. if it is, type 'y' if not, type 'n'\n\n");
        cout << "first name:" << d.firstName << endl;
        cout << "middle name:" <<d.midName << endl;
        cout << "last name:" << d.lastName << endl;
        cout << "age:" << d.age << endl;
        cout << "phone number:" << d.phoneNum << endl;
        cin >> verify;
        if (verify == "y")
        {
            system("CLS");
            printf("your data will be handled with the utmost care");
            _getch();
            break;
        }
        else if (verify == "n")
        {
            continue;
        }
    }
    return 0;
}


