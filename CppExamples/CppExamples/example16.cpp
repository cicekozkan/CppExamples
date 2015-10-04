// can't pass double to const int argument
#include <iostream>

using namespace std;

void func(const int &r);

int main()
{
	double dval = 3.4;

	func(dval);

	return 0;
}