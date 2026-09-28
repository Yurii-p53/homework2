#pragma once

#include <iostream>

#include"ARR.h"
#include"String.h"

using namespace std;
enum Type {INT, DOUBLE, STRING};
class var
{
	Type type;
	int intval;
	double doubleval;
	String strval;

public:

	var() : type(INT), intval(0), doubleval(0.0), strval("") {}

	var(int val) : type(INT), intval(0), doubleval(0.0), strval("") {}

	var(double val) : type(DOUBLE), intval(0), doubleval(0.0), strval("") {}

	var(const char* val) : type(STRING), intval(0), doubleval(0.0), strval("") {}

	var(const String& val) : type(STRING), intval(0), doubleval(0.0), strval("") {}

	void show() {
		if (type == INT)
		{
			cout << intval << endl;
		}
		else if (type == DOUBLE)
		{
			cout << doubleval << endl;
		}
	}
};
