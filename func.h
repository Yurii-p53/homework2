#pragma once
#include<iostream>

using namespace std;

namespace Foo
{
	void foo()
	{
		cout << "Hello World 1" << endl;
	}

	namespace Doo
	{
		void foo()
		{
			cout << "Hello World 1.1" << endl;
		}
	}


}

namespace Boo
{
	void foo()
	{
		cout << "Hello World 2" << endl;
	}
}