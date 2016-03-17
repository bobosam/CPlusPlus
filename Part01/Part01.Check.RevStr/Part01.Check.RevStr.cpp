// Part01.Check.RevStr.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace System;
using namespace std;

void reverseString(char *inputString, char* outputString);
void reverseString(char *inputString);

int main()
{
	char firstString[80], secondString[80];
	strcpy(firstString, "Hello!");

	reverseString(firstString, secondString);
	cout << secondString << "\n";

	reverseString(firstString);
	cout << firstString << "\n";

    return 0;
}

void reverseString(char *inputString, char* outputString) {
	size_t size = strlen(inputString);
	for (size_t i = 0; i < size; i++)
	{
		outputString[size - 1 - i] = inputString[i];
	}

	outputString[size] = '\0';
}

void reverseString(char *inputString) {
	size_t size = strlen(inputString);
	char tempString[80];
	for (size_t i = 0; i < size; i++)
	{
		tempString[size - 1 - i] = inputString[i];
	}

	strcpy(inputString, tempString);

	inputString[size] = '\0';
}
