// bind repeat with a simple example
#include <iostream>
#include <functional>


using namespace std;
using namespace placeholders;


int func(int a, int b, int c)
{
	return a * b * c;
}

int main()
{
	auto f = bind(func, _1, _1, _1);

	cout << f(10) << endl;

	return 0;
}