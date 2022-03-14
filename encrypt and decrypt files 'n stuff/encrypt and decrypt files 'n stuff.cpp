/*
Author: Brooks Sammarco
Project Name: encrypt and decrypt files
File Name: encrypt and decrypt files 'n stuff.cpp
Purpose: searches a vector that is read from a file
Pseudocode: gets the askii of each character in the file, then adds what the user inputs to each askii character, then does that but reverse
Maintenance Log:
3/13/22: done
*/

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

int main()
{
    string input;
    string oText;
    string eText;
    string dText;
    int incryptionFactor;
    
    ifstream text;
    ofstream enText("encrypted text.txt");
    text.open("textt.txt");

    printf("what would you like to encrypt by: ");
    cin >> incryptionFactor;
    system("CLS");

    while (getline(text, oText))
    {

        for (int i = 0; i < oText.length(); i++)
        {
            int askiiValue = (int)oText[i] + incryptionFactor;

            eText += (char)askiiValue;
        }
        enText << eText << '\n';
        cout << "encrypted: " << eText << endl;
        eText = "";
    }
    
    enText.close();
    _getch();
    system("CLS");
    
    ifstream encText;
    ofstream decText("decrypted text.txt");
    encText.open("encrypted text.txt");

    
    while (getline(encText, input))
    {
        for (int i = 0; i < input.length(); i++)
        {
            int askiiValue = (int)input[i] - incryptionFactor;

            dText += (char)askiiValue;
        }
        decText << dText << '\n';
        cout << dText << endl;
        dText = "";
    }
    _getch();



    return 0;
}