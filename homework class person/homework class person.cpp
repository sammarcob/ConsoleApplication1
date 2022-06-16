// homework class person.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Person.h"

int main()
{
    Person person;
    string name;
    int age;

    cout << "input name: \n";
    cin >> name;
    person.setName(name);
    cout << "input age: \n";
    cin >> age;
    person.setAge(age);
    system("CLS");

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}