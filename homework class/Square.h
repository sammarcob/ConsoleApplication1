#pragma once
#include<math.h>

class Square
{
public:

	Square();
	Square(float length);
	float getSide();
	void setSide(float length);
	float getPerimeter();
	float getArea();
private:
	float l;

};
