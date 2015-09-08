// in this example a function template take its parameters by value. In this case array to pointer 
// conversion occurs
#include <iostream>

using namespace std;

template<typename T>
void func(T a)
{
	cout << typeid(T).name() << endl;
}

int main()
{
	int x = 10;
	int a[10] = { 0 };
	
	func(x);
	func(a);
	cin >> x;
	return 0;
}