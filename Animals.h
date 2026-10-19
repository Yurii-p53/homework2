#pragma once
#include <iostream>

using namespace std;

class Animal 
{
public:
	
};

class Dog : public Animal
{
	string* nameDog;
public:
	Dog(string nameDog) : nameDog(&nameDog) {

	}

	~Dog()
	{
		delete nameDog;
	}
};

class Cat : public Animal
{
public:
	string* nameCat;
	Cat(string nameCat) : nameCat(&nameCat) {

	}

	~Cat() 
	{
		delete nameCat;
	}
};

class Parrot : public Animal
{
	string* nameParr;
	Parrot(string nameParr) : nameParr(&nameParr) {

	}

	~Parrot()
	{
		delete nameParr;
	}
};