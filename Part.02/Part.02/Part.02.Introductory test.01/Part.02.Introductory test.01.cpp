// Part.02.Introductory test.01.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace System;
using namespace std;

int main()
{
	char inputLine[100];
	int size;
	cout << "Ener text: ";
	cin >> inputLine;
	size = strlen(inputLine);

	cout << "Size: " << size << "\n";

    return 0;
}
