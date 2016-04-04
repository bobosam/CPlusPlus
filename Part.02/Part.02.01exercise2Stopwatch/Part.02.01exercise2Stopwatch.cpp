// Part.02.01exercise2Stopwatch.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;
using namespace System;

class  Stopwatch
{
public:
	Stopwatch();
	~Stopwatch();
	void start();
	void stop();
	void show();

private:
	double begin;
	double end;
};

Stopwatch::Stopwatch()
{
	begin = 0.0;
	end = 0.0;
}

Stopwatch::~Stopwatch()
{
	cout << "Stop time: ";
	show();
}

void Stopwatch::start() {
	begin = (double)clock() / CLOCKS_PER_SEC;
}

void Stopwatch::stop() {
	end = (double)clock() / CLOCKS_PER_SEC;
}

void Stopwatch::show() {
	cout << end - begin << "\n";
}

int main()
{

	Stopwatch watch;
	watch.start();

	for (size_t i = 0; i < 1000000000; i++)
	{
	}

	watch.stop();

	return 0;
}
