// CheckPart2.02.FutConvertor.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

class Convertor
{
public:
	Convertor(double input_feet);
private:
	double feet;
	double inches;
};

Convertor::Convertor(double input_feet)
{
	feet = input_feet;
	inches = input_feet * 12;
	cout << "Feet: " << feet << "\n";
	cout << "Inches: " << inches << "\n";
}


int main()
{
	Convertor num(2);

	return 0;
}
