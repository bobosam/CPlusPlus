// Part01.07.Sroot.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
using namespace System;

int sroot(int number);
long sroot(long number);
double sroot(double number);

int main()
{
	int a = 100;
	long b = 1024;
	double c = 1000.16;

	cout << "int: " << sroot(a) << "\n";
	cout << "long: " << sroot(b) << "\n";
	cout << "double: " << sroot(c) << "\n";
    
    return 0;
}

int sroot(int number) {

	return (int)(sqrt((double)number));
}

long sroot(long number) {

	return (long)(sqrt((double)number));
}

double sroot(double number) {

	return sqrt(number);
}