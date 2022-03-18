#include "Rectangle.h"

rectangle::rectangle()
{
	l = 0;
	w = 0;
}
rectangle::rectangle(float length, float width)
{
	l = length;
	w = width;
}
rectangle::rectangle(rectangle& r)
{
	l = r.l;
	w = r.w;
}
void rectangle::setMeasure(float length, float width)
{
	l = length;
	w = width;
}
float rectangle::getLength()
{
	return l;
}
float rectangle::getWidth()
{
	return w;
}
float rectangle::area()
{
	return l * w;
}
float rectangle::perimeter()
{
	return (l * 2) + (w * 2);
}