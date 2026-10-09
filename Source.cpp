#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Node.h"
#include "Windows.h"
#include "Queue.h"
#include "PriorityQueue.h"
#include "Fraction.h"
#include "ForwardList.h"
#include "Bus.h"
using namespace std;



int main()
{
	// 09.10.26

	ForwardList<int> l = { 1, 2, 3 };
	ForwardList<int> l1 = { 2, 2, 3 };
	ForwardList<int> l2 = l1;
	cout << l[1] << endl;
	l2.print();

	l2.remove(1);
	l2.print();



	// 05.10.2026

	/*Queue<int> q = { 2,5,6,7,8,0,3 };
	
	q.enqueue(10);
	q.ring();
	q.print();
	cout << q.peek() << endl;
	q.clear();
	q.print();*/


	/*PriorityQueue<int> pq;
	pq.enqueue(10, 1);
	pq.enqueue(20, 2);
	pq.enqueue(10, 1);
	pq.enqueue(30, 3);
	pq.enqueue(20, 12);
	pq.print();

	PriorityQueue<Fraction, float> p;
	p.enqueue(Fraction(2, 3), (float)Fraction(2, 3));
	p.enqueue(Fraction(1, 3), (float)Fraction(1, 3));
	p.enqueue(Fraction(3, 3), (float)Fraction(3, 3));
	p.enqueue(Fraction(5, 3), (float)Fraction(5, 3));
	p.enqueue(Fraction(1, 3), (float)Fraction(1, 3));

	p.print();*/


	/*Queue<Bus> bus = { };
	Queue<People> p;

	int i = 0;
	while (true)
	{
		if (i % 2 == 0)
		{
			cout << "[+] New passanger" << endl;
			p.enqueue(People());

		}
		if (i % 10 == 0)
		{
			cout << "[!] -- Bus arrived-- " << endl;

		}

		Sleep(1000);
		i++;
	}*/



	/*Array<int> a(10);*/






	// 25.09.26

	//int a = 5;
	//int b = ! a;

	//Fraction f1(3, 5);
	//Fraction f2(2, 3);
	///*Fraction f4 = f1 + f2;

	//f4.show();*/

	//Fraction f3 = -f1;
	//(f2++).show();
	////(++f2).show();



	//f1 = f2 + 5;
	//f1.show();

	//f1 = 5 + f2;
	//f1.show();

	//if (f1 < f2) {
	//	cout << "<\n";
	//}
	//else {
	//	cout << ">\n";
	//}

	//cin >> f2;
	//cout << f2;


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