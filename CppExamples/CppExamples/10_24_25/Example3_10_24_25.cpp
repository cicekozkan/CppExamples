// examples to ios::hex which requires the overload of setf member function. the second argument to setf 
// is basefield mask value for ios::hex, ios::oct and ios::dec
// also ios::uppercase
// ios::showbase
#include <iostream>

using namespace std;

int main()
{
	int x = 34545634;
	cout.setf(ios::hex, ios::basefield);
	cout.setf(ios::uppercase);
	cout.setf(ios::showbase);
	cout << x << endl;

	return 0;
}