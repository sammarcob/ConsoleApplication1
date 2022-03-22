#pragma once

class triangle
{
public:
	triangle();
	triangle(float base, float height);
	triangle(triangle& t);
	void setMeasure(float base, float height);
	float getBase();
	float getHeight();
	float perimeter();
	float area();
	
private:
	float b;
	float h;
};