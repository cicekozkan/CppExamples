// Example to function wrapper function<> template
// Class that can wrap any kind of callable element (such as functions and function objects) 
// into a copyable object, and whose type depends solely on its call signature (and not on the callable element type itself).

#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

struct Veli {

	int operator()(int x)
	{
		return x + 10;
	}
};

int foo(int val)
{
	return val * val;
}

int main()
{
	// a function wrapper that takes an integer and returns an integer
	// starts its life with a global function
	function<int(int)> f(foo);

	cout << f(10) << endl;

	// and then it wraps a class object with operator() overload
	f = Veli();

	cout << f(20) << endl;

	// it wraps a lambda
	f = [](int a) {return a * a * a; };

	cout << f(5) << endl;

	return 0;
}