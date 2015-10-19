// another simple example to repeat bind 
#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

int func(int a, int b, int c)
{
	return a * b + c;
}

int main()
{
	auto f = bind(func, _3, _2, _1);

	cout << f(10, 5, 2) << endl;

	return 0;
}