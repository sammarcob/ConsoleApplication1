/*
Author: Brooks Sammarco
Project Name: word reverser 
File Name: word reverser 'n stuff.cpp
Purpose: reverses a string
Pseudocode: you input a string. the sting gets reversed in a seperate function, then sent back to the main where it is printed. 
Maintenance Log:
1/21/22: wrote it all. 
*/

#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <math.h>
using namespace std;

string wordReverser(string name);

int main()
{
	while (1 < 2)
	{
		system("CLS");
		string name;
		string choice;
		cout << "what is the word you would like to reverse?\n";
		cin >> name;
		string reversedWord = wordReverser(name);

		system("CLS");
		cout << reversedWord;

		_getch();
		system("CLS");
		printf("would you like to enter another word?\n\ny\n\nn\n\n");
		cin >> choice;
		if (choice == "y")
		{
			continue;
		}
		else if (choice == "n")
		{
			break;
		}
	}
	return 0;
}

string wordReverser(string name)
{
	string reversedWord= "";

	for (int r=name.length() - 1;r>-1; r--)
	{
		reversedWord += name[r];
	}

	return reversedWord;
}