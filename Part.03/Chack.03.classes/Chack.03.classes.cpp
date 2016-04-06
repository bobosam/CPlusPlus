// Chack.03.classes.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;
using namespace System;

class base
{
public:
	void load_a(int n) { a = n; }
	int get_a() { return a; }

private:
	int a;
};

class derived : public base
{
public:
	void load_b(int n) { b = n; }
	int get_b() { return b; }

private:
	int b;
};


int main()
{
	derived ob1, ob2;

	ob1.load_a(5);
	ob1.load_b(10);

	ob2 = ob1;

	cout << "Ob1 a: " << ob1.get_a() << "   Ob1 b: " << ob1.get_b() << "\n";
	cout << "Ob2 a: " << ob2.get_a() << "   Ob2 b: " << ob2.get_b() << "\n";

	return 0;
}
