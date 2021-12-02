/*

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
	printf("press the tild key, then enter when you are done\n");
	cin >> text;
	getline(cin, text, '~');

	printf("your text is %s characters long", text.length());

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == '')
		{


		
		}
	}
	return 0;
}