#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

class ellipse
{
public:
	ellipse();
	ellipse(float rad1, float rad2);
	ellipse(ellipse& E);
	void setRadii(float rad1, float rad2);
	float getRadius1();
	float getRadius2();
	float circumference();
	float area();
private:
	float r1, r2;
};