// homework class.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include "Square.h"

int main()
{
    Square square;
    float length;

    std::cin >> length;
    square.setSide(length);

    std::cout << "area: " << square.getArea() << std::endl;
    std::cout << "perimeter: " << square.getPerimeter() << std::endl;

}
