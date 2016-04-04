// Part.02.03.exercise01.area.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

class area_c1
{
public:
	double height;
	double width;

private:

};

class rectangle : public area_c1
{
public:
	double area();
	rectangle(double in_height, double in_width);
};

rectangle::rectangle(double in_height, double in_width)
{
	height = in_height;
	width = in_width;
}

double rectangle::area()
{
	return height * width;
}

class isosceles : public area_c1
{
public:
	double area();
	isosceles(double in_height, double in_width);
};

isosceles::isosceles(double in_height, double in_width)
{
	height = in_height;
	width = in_width;
}

double isosceles::area() {
	return height * width / 2;
}

class cylinder : public area_c1
{
public:
	cylinder(double in_height, double in_width);
	double area();
};

cylinder::cylinder(double in_height, double in_width)
{
	height = in_height;
	width = in_width;
}

double cylinder::area() {
	double ar = 2 * 3.14*(width / 2)*(width / 2) + 3.14*width*height;

	return ar;
}
int main()
{
	rectangle rec(4, 5);
	isosceles iso(4, 3);
	cylinder cyl(4, 5);

	cout << "Rectangle area: " << rec.area() << "\n";
	cout << "Isosceles area: " << iso.area() << "\n";
	cout << "Cylinder area: " << cyl.area() << "\n";

	return 0;
}
