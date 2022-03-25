/*
Author: Brooks Sammarco
Project Name: person class
File Name:
Purpose:
Pseudocode:
Maintenance Log:

*/

#pragma once
#define _USE_MATH_DEFINES
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <fstream>
#include "person.h"

using namespace std;

int main()
{
    person p;

    string namef;
    string namem;
    string namel;
    int pAge;
    string phone;

    printf("what if your first name: ");
    cin >> namef;
    printf("what is your middle name: ");
    cin >> namem;
    printf("what is your last name: ");
    cin >> namel;
    printf("what is your age: ");
    cin >> pAge;
    printf("what is your phone number: ");
    cin >> phone;

    system("CLS");

    p.setData(namef, namem, namel, pAge, phone);

    cout << "first name: " << p.getfName() << "\n" << "middle name: " << p.getmName() << "\n" << "last name: " << p.getlName() << "\n" << "age: " << p.getAge() << "\n";
    cout << "phone number: " << p.getpNum() << endl;

    return 0;
}