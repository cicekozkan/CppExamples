// if a function template takes its arguments by reference array to pointer conversion will not occur
// that's why if you pass arrays of same type but different size to a function template with 2 parameters
// the template parameter type will be ambigious
#include<iostream>

using namespace std;

template<typename T>
void func(T &r1, T &r2)
{
	cout << typeid(T).name() << endl;
}

int main()
{
	int a[5] = { 0 }, b[10] = { 0 };
	func(a, b); // parameter T is ambigious
	return 0;
}