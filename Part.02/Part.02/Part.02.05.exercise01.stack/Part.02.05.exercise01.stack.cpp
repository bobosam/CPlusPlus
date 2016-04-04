// Part.02.05.exercise01.stack.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;
using namespace System;

#define SIZE 10

struct stack
{
	stack()
	{
		tos = 0;
	}

	void push(char ch)
	{
		if (tos == SIZE)
		{
			cout << "Stack is full\n";
			return;
		}

		stck[tos] = ch;
		tos++;
	}

	char pop()
	{
		if (tos == 0)
		{
			cout << "Stack is empty\n";
			return 'p';
		}

		tos--;

		return stck[tos];
	}

private:
	char stck[SIZE];
	int tos;
};

int main()
{
	stack st;
	st.pop();

	st.push('b');
	st.push('a');

	cout << "a -->" << st.pop() << "\n";
	cout << "b -->" << st.pop() << "\n";

	return 0;
}
