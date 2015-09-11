// you can define template argument type by writing it explicitly within <>
#include <iostream>

using namespace std;

template<class T, class U>
T func(T a, U b)
{
	U x = b;
	cout << typeid(T).name() << endl;
	cout << typeid(U).name() << endl;
	return x;
}

int main()
{
	func<int, double>(1, 2.4);

	return 0;
}