/*
Author: Brooks Sammarco
Project Name: multiplication table flash cards
File Name: multiplication table flash cards 'n stuff.cpp
Purpose: quizzes you on your multiplication tables
Pseudocode: 
Maintenance Log:
2/3/22: wrote the for loops
2/4/22: wrote some more stuff
2/7/22: FINISHED
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

int main()
{
    srand(0);
    srand((unsigned)time(NULL));
    string choice;
    int ans;

    vector<vector<int>>numbers;
    for (int i = 1; i <= 12; i++)
    {
        vector<int>temp;
        for (int f = 1; f <= 12; f++)
        {
            temp.push_back(f * i);
        }
        numbers.push_back(temp);
    }
    
    
    
    printf("do you want a flash card?\n(y/n)");
    cin >> choice;
    if (choice == "y")
    {
       while (true)
       {
           system("CLS");
                int wer = (rand() % 12);
                int qwerty = (rand() % 12);

                printf("%d * %d\n", wer + 1, qwerty + 1);
                cin >> ans;

                if (ans == numbers[wer][qwerty])
                {
                    printf("good job\n do you want another?\n(y/n)\n");
                    cin >> choice;
                    if (choice == "y")
                    {
                        continue;
                    }
                    else if (choice == "n")
                    {
                        return 0;
                    }
                }
                else
                {
                    printf("wrong awnser\n");
                    _getch();
                    continue;
                }

       }
    }
    else if (choice == "n")
    {
        printf("why did you run this?\n");
        _getch();
        return 0;
    }
    
    return 0;
}