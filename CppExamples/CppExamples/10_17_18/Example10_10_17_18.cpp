// a function binded to another with reversed order of arguments
#include <iostream>
#include <functional>
#include "cupa.h"

using namespace std;
using namespace std::placeholders;

void func(int x, int y, int z)
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << sl;
}

int main()
{
	/*auto f1 = bind(func, 10, 20, 30);
	f1();
	auto f2 = bind(func, _1, 100, 200);
	f2(-5);
	auto f3 = bind(func, _1, 50, _2);
	f3(1, 2);*/
	auto f4 = bind(func, _3, _2, _1);
	f4(1, 2, 3);

	return 0;
}