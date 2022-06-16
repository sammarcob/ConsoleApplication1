#pragma once
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(int age, string name);
	string getName();
	int getAge();
	void setName(string name);
	void setAge(int age);



private:
	int a;
	string n;
};