#include "Person.h"

Person::Person()
{
	a = 0;
	n = "";
}
Person::Person(int age, string name)
{
	a = age;
	n = name;
}
string Person::getName()
{
	return n;
}
int Person::getAge()
{
	return a;
}
void Person::setName(string name)
{
	n = name;
}
void Person::setAge(int age)
{
	a = age;
}