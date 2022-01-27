/*
Project Name: 1 - 10 with one variable
Author:Brooks Sammarco
File Name: ints 'n stuff 
Purpose: writing code that counts to ten using one int
Pseudocode: prints 10 lines of code adding to an int to count to ten 
Matinence Log:
9/13/21: wrote all the lines of code 
9/14/21: wrote the comments 
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
string capitalize(string original)
{
    original[0] = toupper(original[0]);

    for (int i = 0; i < original.length(); i++)
    {
        if (original[i - 1] == ' ')
        {
            original[i] = toupper(original[i]);
        }
    }
    return original;
}

int main()
{
    string word;
	string original;
	
    printf("enter sentence\n");
    cin >> word;
	
	word = capitalize(original);
	cout << word << endl;
	_getch();
	
}

//word = capitalize(original);
//cout << original << endl;
//_getch();

/*
int i = 1;
	printf("%i\n", i);
	printf("%i\n", i + 1);
	printf("%i\n", i + 2);
	printf("%i\n", i + 3);
	printf("%i\n", i + 4);
	printf("%i\n", i + 5);
	printf("%i\n", i + 6);
	printf("%i\n", i + 7);
	printf("%i\n", i + 8);
	printf("%i\n", i + 9);
	_getch();
	return 0;
*/