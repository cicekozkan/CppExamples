// you cannot assign a double to a int reference. "cannot convert from double to int &"
#include <iostream>

using namespace std;

int main()
{
	double dval = 34.5;
	int &r = dval;

	return 0;
}