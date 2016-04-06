// Check.Part03.05.Stack.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

#define STACK_SIZE 26

class stack
{
public:
	stack();
	void push(char ch);
	char pop();

private:
	int peak;
	char st[STACK_SIZE];
};

stack::stack()
{
	peak = 0;
}

char stack::pop()
{
	if (peak == 0)
	{
		cout << "Stack is empty\n";
		return 0;
	}

	peak--;

	return st[peak];
}

void stack::push(char ch)
{
	if (peak == STACK_SIZE)
	{
		cout << "Stack is full\n";
		return;
	}

	st[peak] = ch;
	peak++;
}

stack loadstack()
{
	stack st;
	for (size_t i = 'a'; i <= 'z'; i++)
	{
		st.push(i);
	}

	return st;
}

stack loadstack(int upper)
{
	stack st;
	for (size_t i = 'a'; i <= 'z'; i++)
	{
		if (upper  == 1)
		{
			st.push(toupper(i));
		}
		else
		{
			st.push(i);
		}
	}

	return st;
}

int main()
{
	stack output = loadstack(1);
	stack second = loadstack();

	for (size_t i = 0; i < STACK_SIZE; i++)
	{
		cout << output.pop() << " ";
		cout << second.pop() << " ";
	}

	cout << "\n";

	return 0;
}
