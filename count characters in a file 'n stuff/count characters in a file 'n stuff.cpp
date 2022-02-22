/*
Author: Brooks Sammarco
Project Name: count characters in a file
File Name: count characters in a file 'n stuff.cpp
Purpose: write code that counts the number of spaces, tabs, newlines and numbers and length in a file using getline
Pseudocode: puts a file into a getline, then using if statements, counts the number of different things in the string
Maintenance Log:
2/22/21: finish
*/

#define _USE_MATH_DEFINES
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int spaces = 0;
	int newline = 0;
	int numbers = 0;
	int tabs = 0;
	int length = 0;

	ifstream in;
	ofstream out("OutputFile.txt");
	in.open("InputFile.txt");
	
	if (!in.is_open())
	{
		printf("File not found");
	}

	string temp;
	string input;

	


	while (getline(in, temp))
	{
		for (int i = 0; i < temp.length(); i++)
		{
			if (temp[i] == ' ')
			{
				spaces++;
			}
			else if (temp[i] == '\t')
			{
				tabs++;
			}
			else if (temp[i] >= '0' && temp[i] <= '9')
			{
				numbers++;
			}
		}
		newline++;
		length += temp.length();
		
	}
	in.close();
	cout << "spaces: " << spaces << endl;
	cout << "tabs: " << tabs << endl;
	cout << "lines: " << newline << endl;
	cout << "numbers: " << numbers << endl;
	cout << "length: " << length << endl;
	
	_getch();
	return 0;
}