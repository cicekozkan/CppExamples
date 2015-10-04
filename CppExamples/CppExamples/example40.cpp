// an example to auto keyword
#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	auto x = 10;
	auto y = x + 3.4;

	cout << typeid(x).name() << endl;
	cout << typeid(y).name() << endl;
	cin >> x;
	return 0;
}