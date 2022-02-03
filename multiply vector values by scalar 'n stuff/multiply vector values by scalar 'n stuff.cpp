

#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    srand((unsigned)time(NULL));
    vector<int> v;

    for (int i = 0; i < 50; i++)
    {
        int num = 1 + rand() % 100;
        v.push_back(num);
    }

    int scaler;
    printf("input scaler\n");
    cin >> scaler;
    system("CLS");


    for (int i = 0; i < v.size(); i++)
    {
        v[i] = v[i] * scaler;
        cout << v[i] << endl;
    }
    
    _getch();


    return 0;
}