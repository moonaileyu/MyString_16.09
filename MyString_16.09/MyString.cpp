#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString()
{
	length = 80;
	str = new char[length] {};
}

MyString::MyString(int size)
{
	length = size;
	str = new char[length] {};
}

MyString::MyString(const char* st)
{
	length = strlen(st);
	str = new char[length + 1];
	strcpy_s(str, length + 1, st);
}

MyString::MyString(const MyString& obj1)
{
	length = obj1.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj1.str);
}

MyString::~MyString()
{
	delete[] str;
	length = 0;
}

void MyString::Print()
{
	cout << str << endl;
}

void MyString::MyStrcpy(MyString& obj1)
{
	length = obj1.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj1.str);
}

bool MyString::MyStrStr(const char* str)
{
	const char* s = strstr(this->str, str); 

	if (s != nullptr)
	{
		return true;
	}
	return false;
}

int MyString::MyChr(char c)
{
	return 0;
}

int MyString::MyStrLen()
{
	return 0;
}

void MyString::MyStrCat(MyString& b)
{
}

void MyString::MyDelChr(char c)
{
}

int MyString::MyStrCmp(MyString& b)
{
	return 0;
}
