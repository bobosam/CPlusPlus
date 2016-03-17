// Part01.07.Sleep.cpp : main project file.

#include "stdafx.h"
#include <iostream>


using namespace System;
using namespace std;

void sleep(int time);
void sleep(char* timeStr);

int main()
{
	cout << "int start sleep\n";
	sleep(10);
	cout << "int end sleep\n";

	cout << "str start sleep\n";
	sleep("10");
	cout << "str end sleep\n";

	return 0;
}

void sleep(int time) {
	for (size_t i = 0; i < time * 100000000; i++)
	{
	}
}

void sleep(char* timeStr) {
	int time = atoi(timeStr);
	for (size_t i = 0; i < time * 100000000; i++)
	{
	}
}