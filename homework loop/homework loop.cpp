// homework loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

//int main()
//{
//	float iNum = 0;
//	do
//	{
//		std::cin >> iNum;
//		if (iNum > 3.5 || iNum < 2.5)
//		{
//			std::cout << "input not between 2.5 & 3.5";
//			_getch();
//			system("CLS");
//		}
//	} while (iNum > 3.5 || iNum < 2.5);
//
//}

//dowhile ^

//int main()
//{
//	//requires conio
//	int iNum = -1;
//
//	while (iNum <= -1)
//	{
//		std::cout << "number: ";
//		std::cin >> iNum;
//		if (iNum <= -1)
//		{
//			std::cout << "iNum is a negative number";
//			_getch();
//			system("CLS");
//		}
//		if (iNum > -1)
//		{
//			std::cout << "positive number";
//		}
//	}
//}

//while ^

int main()
{
    //1A
    int counter = 0;
    for (int i = 15; i <= 125; i++)
    {
        counter++;
        if (counter <= 5)
        {
            std::cout << i << "\t";
        }
        if (counter == 5)
        {
            std::cout << "\n";
            counter = 0;
        }

        if (i == 24 || i == 29 || i == 34)
        {
            i++;
        }
    }

    
}

//for^