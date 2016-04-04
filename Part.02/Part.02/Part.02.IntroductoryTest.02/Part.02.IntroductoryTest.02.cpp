// Part.02.IntroductoryTest.02.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

public class EntityAdres
{
public:
	void store(char* inputName, char *inputAdress);
	char* display(char* output);
	char output[300];

private:
	char name[80];
	char adress[200];

};

void EntityAdres::store(char* inputName, char* inputAdress) {
	strcpy(name, inputName);
	strcpy(adress, inputAdress);
}

char* EntityAdres::display(char* output) {
	strcpy(output, name);
	strcat(output, " ");
	strcat(output, adress);

	return output;
}


int main()
{
	EntityAdres first, second;
	first.store("Pepo", "Sofia");
	second.store("Gogo", "Plovdiv");

	cout << first.display(first.output) << "\n";
	cout << second.display(second.output) << "\n";

	return 0;
}
