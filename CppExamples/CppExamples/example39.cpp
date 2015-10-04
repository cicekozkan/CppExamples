// auto keyword is used to guess the type of the rvalue and define the lvalue with the same type
#include <iostream>

using namespace std;

struct Data {
	int a, b, c;
};

Data func();
double *foo();

int main()
{
	auto x = func();
	auto p = foo();
	auto t1 = 0;
	auto t2 = 0.;
	auto t3 = 0.L;

	return 0;
}