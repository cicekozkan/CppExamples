// ios::showpoint: generate a decimal-point character unconditionally for floating-point number output
#include <iostream>

using namespace std;

int main()
{
	double f = 345.;

	cout.setf(ios::showpoint);

	cout << f << endl;

	return 0;
}