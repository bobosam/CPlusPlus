// Part02check02.line.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

class line
{
public:
	line(int length);
	~line();

private:
	int len;
};

line::line(int length)
{
	len = length;
	for (size_t i = 0; i < length; i++)
	{
		cout << '*';
	}

}

line::~line()
{
	cout << "\r";
}

int main()
{
	line l(10);
	for (size_t i = 0; i < 1000000000; i++)
	{

	}
	return 0;
}
