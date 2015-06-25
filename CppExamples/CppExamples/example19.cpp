// call by reference - pointer
#include <iostream>

using namespace std;

void func(int *ptr)
{
	*ptr = 9999;
}


int main()
{
	int y = 567;

	func(&y);

	cout << "y = " << y << endl;
	cin >> y;
	return 0;
}