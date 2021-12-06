/*
Author: Brooks Sammarco
Project Name: count characters in a string
File Name: count characters in a string 'n stuff.cpp
Purpose: write code that counts the number of spaces, tabs, newlines and numbers in a sentence 
Pseudocode: asks you to enter a sentence followed by ~ and enter, then goes down a for statement checking for certain things.
Maintenance Log:
12/2/21: started writing the code (ints, strings, getline)
12/3/21: finished code
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
	string text;
	int spaces = 0;
	int newline = 0;
	int numbers = 0;
	int tabs = 0;

	printf("enter a sentence.\n");
	printf("press tild key, then enter when you are done\n");
	getline(cin, text, '~');

	printf("your text is %i characters long", text.length());

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == ' ')
		{
			spaces++;
		}
		else if (text[i] == '\t')
		{
			tabs++;
		}
		else if (text [i]=='\n')
		{
			newline++;
		}
		else if(text[i]>='0' && text[i]<='9')
		{
			numbers++;
		}
	}
	printf("%i spaces, %i numbers, %i new lines, %i tabs.\n", spaces, numbers, newline, tabs);
	return 0;
}