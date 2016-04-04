// Part01.05Problem02.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

class  card
{
public:
	void store(char title[50], char author[50], int counts);
	void show();

private:
	char titleName[50];
	char authorName[50];
	int number;
};

void card::store(char title[50], char author[50], int count)
{
	strcpy(titleName, title);
	strcpy(authorName, author);
	number = count;
}

void card::show()
{
	cout << "Title: " << titleName << "\n";
	cout << "Author: " << authorName << "\n";
	cout << "Number on hand: " << number << "\n\n";
}

int main()
{
	card book1, book2, book3;

	book1.store("abc", "ivan", 45);
	book2.store("fdg", "pesho", 12);
	book3.store("fewt", "koko", 77);

	book1.show();
	book2.show();
	book3.show();

	return 0;
}
