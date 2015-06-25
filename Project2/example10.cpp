// a call to a function may seem like call by value but it may be a call by reference too
// that's why you cannot judge a function by only looking at how it is called. you need to 
// see its definition to understand if it is call by value or call by reference
#include <iostream>

using namespace std;

void func(int &r)
{
	r = 9999;
}

int main()
{
	int x = 50;

	func(x);

	cout << "x = " << x << endl;

	cin >> x;

	return 0;
}