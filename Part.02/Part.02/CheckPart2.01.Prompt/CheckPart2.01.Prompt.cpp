// CheckPart2.01.Prompt.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;
using namespace System;

class prompt
{
public:
	prompt(char *s);
	~prompt();

private:
	char str[20];
	int count;
};

prompt::prompt(char *s)
{
	strcpy(str, s);
	cout << str << "\n";
	cout << "Input number: ";
	cin >> count;
}

prompt::~prompt()
{
	for (size_t i = 0; i < count; i++)
	{
		cout << "\a";
		for (size_t j = 0; j < 10000; j++)
		{
		}
	}
}

int main()
{
	prompt pr("fefvsv");
	return 0;
}
