// Example to bind. std::placeholders::_1 is first argument, std::placeholders::_2 is second argument ...
#include <iostream>
#include <functional>

using namespace std;
using namespace std::placeholders;

int func(int a, int b)
{
	return a + b;
}

int main()
{
	auto f = bind(func, _1, 50);

	cout << f(20) << endl;

	return 0;
}