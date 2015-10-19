// a function with a parameter of os& binded to another function
// whose argument is cout object wrapped in reference_wrapper<> class
#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

void print(ostream &os, int val, const char *p)
{
	os << val << p;
}

int main()
{
	int x = 32421;

	auto f = bind(print, ref(cout), _1, "\n\n\n");

	f(x);

	return 0;
}