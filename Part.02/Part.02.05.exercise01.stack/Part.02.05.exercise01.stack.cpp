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
	stack st, st1;
	st.pop();

	st.push('b');
	st.push('a');

	st1 = st;
	st.push('c');

	cout << "st -->" << st.pop() << "\n";
	cout << "st -->" << st.pop() << "\n";
	cout << "st -->" << st.pop() << "\n";
	cout << "st1 -->" << st1.pop() << "\n";

	return 0;
}
