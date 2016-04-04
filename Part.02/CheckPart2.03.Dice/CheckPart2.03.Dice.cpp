// CheckPart2.03.Dice.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace System;
using namespace std;

class Dice
{
public:
	Dice();
	int	Roll();

private:
	int number;
};

Dice::Dice()
{
}

int Dice::Roll() {
	srand(time(NULL));
	number = rand() % 6 + 1;

	return number;
}

int main()
{
	Dice num;

	cout << "Number: " << num.Roll() << "\n";

	return 0;
}
