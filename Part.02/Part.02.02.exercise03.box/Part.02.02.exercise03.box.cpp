// Part.02.02.exercise03.box.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

class Box
{
public:
	Box(double a, double b, double c);
	~Box();
	double Capacity();
	void show();

private:
	double sizeA, sizeB, sizeC;
};

Box::Box(double a, double b, double c)
{
	sizeA = a;
	sizeB = b;
	sizeC = c;
}

void Box::show() {
	cout << "Capacity: " << Capacity() << "\n";
}

Box::~Box()
{
}

double Box::Capacity() {
	double capacity = sizeA * sizeB * sizeC;

	return capacity;
}

int main()
{
	Box box(2, 3, 4);
	box.show();
   
    return 0;
}
