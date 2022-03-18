#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

class rectangle
{
public:
	rectangle();
	rectangle(float length, float width);
	rectangle(rectangle& r);
	void setMeasure(float length, float width);
	float getLength();
	float getWidth();
	float area();
	float perimeter();

private:
	float l;
	float w;
};