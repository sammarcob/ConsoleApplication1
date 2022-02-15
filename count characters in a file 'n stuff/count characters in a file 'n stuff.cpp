

#define _USE_MATH_DEFINES
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
	string text;
	int spaces = 0;
	int newline = 0;
	int numbers = 0;
	int tabs = 0;
	ifstream in;
	ofstream out("OutputFile.txt");
	in.open("InputFile.txt");
	in.close();
	string temp;
	string input;

	


	while (getline(in, temp))
	{
		for (int i = 0; i < temp.length(); i++)
		{
			if (text[i] == ' ')
			{
				spaces++;
			}
			else if (text[i] == '\t')
			{
				tabs++;
			}
			else if (text[i] == '\n')
			{
				newline++;
			}
			else if (text[i] >= '0' && text[i] <= '9')
			{
				numbers++;
			}
		}
		
	}
	

	_getch();
	return 0;


}