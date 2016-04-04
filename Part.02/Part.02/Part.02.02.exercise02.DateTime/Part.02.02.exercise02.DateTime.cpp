// Part.02.02.exercise02.DateTime.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace System;
using namespace std;

class t_and_d
{
public:
	t_and_d(time_t input);
	~t_and_d();
	void viewTime();

private:
	time_t objectTime;
};

t_and_d::t_and_d(time_t input)
{
	objectTime = input;
}

t_and_d::~t_and_d()
{
}

void t_and_d::viewTime() {
	char* dt = ctime(&objectTime);
	cout << "Current date and time is: " << dt << "\n";
}

int main()
{
	t_and_d obj(time(0));
	obj.viewTime();


	return 0;
}
