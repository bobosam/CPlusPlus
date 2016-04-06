// Part.03.exercise.03.01.Who.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

class Who
{
public:
	Who(char indent);
	~Who();

private:
	char ind;
};

Who::Who(char indent)
{
	ind = indent;
	cout << "Constructing who #" << ind << "\n";
}

Who::~Who()
{
	cout << "Destroing who #" << ind << "\n";
}

Who make_who(char in)
{
	Who ob(in);

	return ob;
}

int main()
{
	Who first('f');
	Who second = make_who('s');
    return 0;
}
