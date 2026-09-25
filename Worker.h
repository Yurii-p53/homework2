#pragma once

#include <iostream>

#include"ARR.h"
#include"String.h"
#include"Student.h"

using namespace std;
enum type
{

};
class Worker {
private:
	String name;
	String pos;
	int year;
	double salary;
public:
	Worker() : name("Igor"), pos("None"), year(0), salary(0.0) {}

	Worker(const char* name, const char* pos, int year, double salary) : name(name), pos(pos), year(year), salary(salary) {}

	Worker(const Worker& obj) : name(obj.name), pos(obj.pos), year(obj.year), salary(obj.salary) {}

	Worker& operator=(const Worker& obj) {
		if (this == &obj)
		{
			return *this;
		}
		name = obj.name;
		pos = obj.pos;
		year = obj.year;
		salary = obj.salary;
		return *this;
	}

	void setN(const String& name) {
		this->name = name;
	}

	void setP(const String& pos) {
		this->pos = pos;
	}

	int setY(int year) {
		this->year = year;
	}

	double setS(double salary) {
		this->salary = salary;
	}

	const String& getN(){
		return name;
	}

	const String& getP() {
		return pos;
	}

	int getY() const{
		return year;
	}

	double getS() const {
		return salary;
	}

	int getExp(int curryear) const {
		return curryear - year;
	}
	
	void print() {
		cout << "FIO: ";
		name.print();
		cout << "Dolghnost: ";
		pos.print();
		cout << "Salary: " << salary << "$" << endl;
		cout << "God postuplenia: " << year << endl;
		cout << endl;
	}
};