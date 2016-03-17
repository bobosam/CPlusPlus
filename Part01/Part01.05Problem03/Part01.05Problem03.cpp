// Part01.05Problem03.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

#define SIZE 100

class q_type
{
public:
	void init();
	void q(int num);
	int deq();

private:
	int queue[SIZE];
	int head;
	int tail;
};

void q_type::init() {
	head = 0;
	tail = 0;
}

void q_type::q(int num) {
	if (tail + 1 == SIZE || tail + 1 == head)
	{
		cout << "Queue is full" << "\n";
		return;
	}
	tail++;
	if (tail == SIZE)
	{
		tail = 0;
	}

	queue[tail] = num;
}

int q_type::deq() {
	if (head == tail)
	{
		cout << "Empty\n";
	}

	head++;
	if (head == SIZE)
	{
		head = 0;
	}

	return queue[head];
}

int main()
{
	q_type q1, q2;
	int i;
	q1.init();
	q2.init();

	for (size_t i = 0; i < 10; i++)
	{
		q1.q(i);
		q2.q(i*i);
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "Dequeue 1: " << q1.deq() << "\n";
		cout << "Dequeue 2: " << q2.deq() << "\n";
	}

	return 0;
}
