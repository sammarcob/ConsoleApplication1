#pragma once
#define _USE_MATH_DEFINES
#include "math.h"
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <fstream>
#include "triangle.h"
using namespace std;

int main()
{
    triangle t;

    t.setMeasure(3.0, 4.0);
    cout << "perimeter: " << t.perimeter() << "area: " << t.area() << endl;

    return 0;
}