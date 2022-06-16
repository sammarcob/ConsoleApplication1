#include "Square.h"

Square::Square()
{
	l = 1.0;
}
Square::Square(float length)
{
	l = length;
}
float Square::getSide()
{
	return l;
}
void Square::setSide(float length)
{
	l = length;
}
float Square::getPerimeter()
{
	float perimeter = l * 4;
	return perimeter;
}
float Square::getArea()
{
	float area = l * l;
	return area;
}
