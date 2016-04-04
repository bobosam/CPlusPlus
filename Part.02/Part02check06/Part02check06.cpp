// Part02check06.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

class my_class
{
public:
	my_class(int x, int y) {
		i = x;
		j = y;
	}

	void show() {
		cout << i << " " << j << "\n";
	}
	 
private:
	int i, j;
};


int main()
{
	my_class count(2, 3);
	count.show();
    
    return 0;
}
