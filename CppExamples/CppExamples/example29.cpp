// if a function returns a reference to a value you can use that function's call as an lvalue
#include <iostream>

using namespace std;

int g = 100;

int &func()
{
	////
	return g;
}

int main()
{
	cout << "g = " << g << endl;
	func() = 8999;
	cout << "g = " << g << endl;
	cin >> g;

	return 0;
}