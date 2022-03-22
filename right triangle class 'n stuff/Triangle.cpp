#include "triangle.h"
#define _USE_MATH_DEFINES
#include "math.h"

triangle::triangle()
{
	b = 0;
	h = 0;
}
triangle::triangle(float base, float height)
{
	b = base;
	h = height;
}
triangle::triangle(triangle& t)
{
	b = t.b;
	h = t.h;
}
void triangle::setMeasure(float base, float height)
{
	b = base;
	h = height;
}
float triangle::getBase()
{
	return b;
}
float triangle::getHeight()
{
	return h;
}
float triangle::perimeter()
{
	float hy;
	float per;
	hy = (b * b) + (h * h);
	return sqrt(hy) + b + h;
}
float triangle::area()
{
	return (b * h) / 2;
}