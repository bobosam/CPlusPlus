// Part01.3Problem02.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

int main()
{
	double foots, inches;
	cout << "Enter foots: ";
	cin >> foots;
	while (foots != 0)
	{
		cout << "Inches: " << 12 * foots << "\n";

		cout << "Enter foots: ";
		cin >> foots;
	}


    return 0;
}
