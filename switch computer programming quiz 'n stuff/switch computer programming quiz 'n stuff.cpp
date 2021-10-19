/*

*/


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    string name;
    int ans1 = 0;
    int ans2;
    int ans3;
    float score = 0;

    printf("please input your name\n");
    cin >> name;
    printf("ok %s, the test will commence shortly\n", name.c_str());
    printf("-press any button to start-");
    _getch();
    system("CLS");

    printf("- please input the code to print a sentence in the language c++\n");
    printf("1. say(hello);\n");
    printf("2. printf(\"hello\")\n");
    printf("3. tell=*hello*:\n");
    printf("4. bozo.bozo@bozo.com       bozo");
    cin >> ans1;
    switch (ans1)
    {
    case 1:
        printf("wrong awnser bozo\n");
        break;
    case 2:
        printf("loser haha loser loser");
    }

    return 0;
}
