// Part01.07.Min.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

char min(char first, char second);
int min(int first, int second);
double min(double first, double second);

int main()
{
	cout << "char: " << min('x', 'a') << "\n";
	cout << "int: " << min(160, 110) << "\n";
	cout << "double: " << min(16.56, 11.25) << "\n";

	return 0;
}

char min(char first, char second) {
	char min = first < second ? first : second;

	return min;
}

int min(int first, int second) {
	int min = first < second ? first : second;

	return min;
}

double min(double first, double second) {
	double min = first < second ? first : second;

	return min;
}