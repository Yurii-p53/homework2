#pragma once


class A
{
private:
	int a;

protected:
	int aa;

public:
	int aaa;
};

class B : protected A
{
public:
	void b()
	{
		//a = 10;

		aa = 10;
		aaa = 10;
	}
};

class C : public B
{
public:
	void c()
	{
		//a = 10;
		aa = 10;
		aaa = 10;
	}

};