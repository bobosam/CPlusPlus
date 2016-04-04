// Part01.Check.CStyle.cpp : main project file.

#include "stdafx.h"
#include <stdio.h>


using namespace System;

int f(int a);

int main()
{
    
	printf("%d\n", f(10));

    return 0;
}

int f(int a) {
	return a * 3.1416;
}
