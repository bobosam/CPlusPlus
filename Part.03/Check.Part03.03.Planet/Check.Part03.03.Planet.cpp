// Check.Part03.03.Planet.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

class planet
{
public:
	double get_miles() { return dist_from_sun; }
	void set_miles(double dist) { dist_from_sun = dist; }
private:
	int moons;
	double dist_from_sun;
	double diameter;
	double mass;
};

double light(planet pl)
{
	double dist = pl.get_miles();

	return dist / 186000;
}

int main()
{
	planet pl;
	pl.set_miles(386500);

	cout << "Time in seconds: " << light(pl) << "\n";
    
    return 0;
}
