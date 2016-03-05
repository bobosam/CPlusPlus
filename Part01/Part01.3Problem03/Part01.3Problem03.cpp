// Part01.3Problem03.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;
using namespace System;

int main()
{
	int a, b, d, min;
	cout << "Enter two numbers";
	cin >> a >> b;
	min = a > b ? b : a;

	for ( d = 2; d < min; d++)
	{
		if ((a % d) == 0 && (b%d) == 0)
		{
			break;
		}

		if (d== min)
		{
			cout << "No common denominators\n";
			return 0;
		}
	}

	cout << "The lowest common denominator is " << d << "\n";

    return 0;
}
