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
    int num = 0;
    int m = 0;
    int d = 0;
    int c = 0;
    int l = 0;
    int x = 0;
    int v = 0;
    int i = 0;
    int cm = 0;
    int cd = 0;
    int xc = 0;
    int xl = 0;
    int ix = 0;
    int iv = 0;
    string input;

    string repeat;

    while (1)
    {
        string output = "";
        system("CLS");
        printf("enter a number between 1 and 3999\n");
      
        cin >> num;
        if (num > 3999)
        {
            printf("read bozo\n");
            continue;
        }
        while (num >= 1000)
        {
            output += "M";
            num -= 1000;
        }
        while (num >= 900)
        {
            output += "CM";
            num -= 900;
        }
        while(num >= 500)
        {
            output += "D";
            num -= 500;
        }
        while(num >= 400)
        {
            output += "CD";
            num -= 400;
        }
        while(num >= 100)
        {
            output += "C";
            num -= 100;
        }
        while(num >= 90)
        {
            output += "XC";
            num -= 90;
        }
        while(num >= 50)
        {
            output += "L";
            num -= 50;
        }
        while (num >= 40)
        {
            output += "XL";
            num -= 40;
        }
        while (num >= 10)
        {
            output += "X";
            num -= 10;
        }
        while (num >= 9)
        {
            output += "IX";
            num -= 9;
        }
        while(num >= 5)
        {
            output += "V";
            num -= 5;
        }
        while (num >= 4)
        {
            output += "IV";
            num -= 4;
        }
        while (num >= 1)
        {
            output += "I";
            num -= 1;
        }

        printf("%s\n", output.c_str());
        _getch();
        system("CLS");

        printf("would you like to input another number?\n");
        printf("y\n\nn\n");
        
        cin >> repeat;
        if (repeat == "y")
        {
            num = 0;
            continue;
        }
        else if (repeat == "n")
        {
            break;
        }
    }
    return 0;
}
