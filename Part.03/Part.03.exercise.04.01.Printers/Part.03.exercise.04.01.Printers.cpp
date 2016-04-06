// Part.03.exercise.04.01.Printers.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

class pr2;

class pr1
{
public:
	pr1() { printing = 0; }
	void set_print(int status) { printing = status; }
	friend bool inuse(pr1 first, pr2 second);
private:
	int printing;
};

class pr2
{
public:
	pr2() { printing = 0; }
	void set_print(int status) { printing = status; }
	friend bool inuse(pr1 first, pr2 second);
private:
	int printing;
};

bool inuse(pr1 first, pr2 second)
{
	if (first.printing || second.printing)
	{
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	pr1 first;
	pr2 second;

	cout << "INuse: " << inuse(first, second) << "\n";

	first.set_print(1);

	cout << "INuse: " << inuse(first, second) << "\n";
    
    return 0;
}
