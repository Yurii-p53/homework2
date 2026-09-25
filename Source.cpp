#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

#include"String.h"
#include"Student.h"
#include "Worker.h"
#include "Fraction.h"
using namespace std;



int main()
{
	// 25.09.26

	int a = 5;
	int b = ! a;

	Fraction f1(3, 5);
	Fraction f2(2, 3);
	/*Fraction f4 = f1 + f2;

	f4.show();*/

	Fraction f3 = -f1;
	(f2++).show();
	//(++f2).show();



	f1 = f2 + 5;
	f1.show();

	f1 = 5 + f2;
	f1.show();

	if (f1 < f2) {
		cout << "<\n";
	}
	else {
		cout << ">\n";
	}

	cin >> f2;
	cout << f2;


	//21.09.26

	/*String s1(80);
	s1.input();
	s1.print();

	String b1(s1);
	b1.print();*/

	/*Student h1(80, "Igor", 2);
	h1.displayInfo();
	

	Student p1(h1);

	p1.displayInfo();


	Student i1(11);
	i1 = p1;
	i1.displayInfo();*/

	

	/*Worker w1("Ivan", "Ingeneer", 2018, 1000);
	Worker w2("Ivan2", "Ingeneer2", 1999, 1500);
	w1.print();
	w2.print();*/




	// 18.09.2026




	/*Time t(1, 1);

	Array* arr = new Array(5);
	arr->setRandom();*/

	// 14.09.2026
	//Student s1(1, "Vasya", 30);






	//Array b;

	//Area::romb()


	//==============================================================

	//cout << "Count of students: " << Student::getCount() << endl;

	//Student s1(1, "Vasya", 30);

	//cout << "Count of students: " << s1.getCount() << endl;

	//Student s2(2);
	//
	//cout << "Count of students: " << s1.getCount() << endl;
	//
	//s1.displayInfo();
	//s2.displayInfo();
	//

	//const int a = 5;
	//const int b(5.5);
	//const int c{ (int)5.5 };



	return 0;
}