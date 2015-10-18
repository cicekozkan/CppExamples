// First example to bind. The signature of the function has not been changed

#include <iostream>
#include <functional>

using namespace std;

int func(int a, int b)
{
	return a + b;
}

int main()
{
	auto f = bind(func, 10, 20);

	cout << f() << endl;

	return 0;
}