// Check.02.strtype.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;
using namespace System;

class strtype
{
public:
	strtype(char *ptr);
	~strtype();
	void show();
	friend char* get_string(strtype *ob);

private:
	char *p;
	int len;
};

strtype::strtype(char *ptr)
{
	len = strlen(ptr);
	p = (char*)malloc(len + 1);
	if (!p)
	{
		cout << "Allocation error\n";
		exit(1);
	}

	strcpy(p, ptr);
}

strtype::~strtype()
{
	cout << "Freeling p\n";
	free(p);
}

void strtype::show()
{
	cout << p << " - length: " << len << "\n";
}

char* get_string(strtype *ob)
{
	return ob->p;
}

int main()
{
	strtype s1("This is a test.");
	char *s;
	s1.show();

	s = get_string(&s1);
	cout << "Here is string contained in s1: " << s << "\n";

    return 0;
}
