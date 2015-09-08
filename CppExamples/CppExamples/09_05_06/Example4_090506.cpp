// in this example a function template take its parameters by pointer
// if a &T is passed as argument the type of T will be T not T*
#include <iostream>

using namespace std;

template<typename T>
void func(T *a)
{
	cout << typeid(T).name() << endl;
}

int main()
{
	int x = 10;

	func(&x);
	cin >> x;

	return 0;
}