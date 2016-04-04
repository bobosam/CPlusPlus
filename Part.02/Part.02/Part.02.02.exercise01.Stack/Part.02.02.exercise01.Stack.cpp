// Part.02.02.exercise01.Stack.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

class Stack
{
public:
	Stack(int number);
	~Stack();
	void push(char ch);
	char pop();

private:
	int top;
	char *stack;
	int size;
};

Stack::Stack(int number)
{
	stack = (char*)malloc(number);
	if (stack == NULL)
	{
		cout << "Out of memory\n";
		exit(1);
	}

	size = number;
	top = 0;
}

Stack::~Stack()
{
	free(stack);
}

void Stack::push(char ch) {
	if (top == size)
	{
		cout << "Stack is full.\n";
		return;
	}

	stack[top] = ch;
	top++;
}

char Stack::pop() {
	if (top == 0)
	{
		cout << "Stack is empty.\n";
		return 0;
	}

	top--;
	return stack[top];
	
}

int main()
{
	Stack s1(10);
	
	s1.push('a');
	s1.push('b');
	cout << " b " << s1.pop() << "\n";
	cout << " a " << s1.pop() << "\n";
	cout << " empty " << s1.pop() << "\n";
	    
    return 0;
}
