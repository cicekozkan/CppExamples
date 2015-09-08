// in this example a function template take its parameters by pointer
// if a &T is passed as argument the type of T will be T not T*
#include <iostream>

using namespace std;

template<typename T>
void func(T *a)
{
	cout << typeid(T).name() << endl;
}

class Myclass{};

int main()
{
	int x = 10;
	int *ptr = &x;
	Myclass m;

	func(&x);	// T = int
	func(&ptr);	// T = int *
	func(&m);	// T = class Myclass
	cin >> x;

	return 0;
}