// there is no reference to reference. they will all reference to the same variable
#include <iostream>

using namespace std;

int main()
{
	int x = 30;
	int &r1 = x;
	int &r2 = r1;

	return 0;
}