#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

#include"String.h"
#include"Student.h"
using namespace std;



int main()
{

	//21.09.26

	/*String s1(80);
	s1.input();
	s1.print();

	String b1(s1);
	b1.print();*/

	Student h1(80, "Igor", 2);
	h1.displayInfo();
	

	Student p1(h1);
	p1.displayInfo();






	// 18.09.2026




	/*Time t(1, 1);

	Array* arr = new Array(5);
	arr->setRandom();*/

	// 14.09.2026
	//Student s1(1, "Vasya", 30);



	/*Array a(10);
	a.setRandom();
	a.show();*/




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