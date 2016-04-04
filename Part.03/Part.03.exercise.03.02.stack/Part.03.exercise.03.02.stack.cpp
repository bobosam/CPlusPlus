// Part.03.exercise.03.02.stack.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;
using namespace System;

#define SIZE 10

class Stack
{
public:
	Stack();
	void push(char ch);
	char pop();
	int get_size();

private:
	int peack;
	char stc[SIZE];
};

Stack::Stack()
{
	peack = 0;
}

int Stack::get_size() {
	return peack;
}

void Stack::push(char ch) {
	if (peack == SIZE)
	{
		cout << "Stack is full.\n";
		return;
	}

	stc[peack] = ch;
	peack++;
}

char Stack::pop() {
	if (peack == 0)
	{
		cout << "Stack is empty.\n";
		return 0;
	}

	peack--;
	return stc[peack];
}

void show_stack(Stack stc) {
	int size = stc.get_size();
	for (size_t i = 0; i < size; i++)
	{
		cout << stc.pop() << "\n";
	}
}

int main()
{
	Stack st;
	st.push('a');
	st.push('b');
	st.push('c');
	st.push('D');

	show_stack(st);

	return 0;
}
