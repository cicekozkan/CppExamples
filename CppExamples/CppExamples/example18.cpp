// call by value does not change local variable's value
#include <iostream>

using namespace std;

void func(int x)
{
	x = 9999;
}


int main()
{
	int y = 567;

	func(y);

	cout << "y = " << y << endl;
	cin >> y;
	return 0;
}