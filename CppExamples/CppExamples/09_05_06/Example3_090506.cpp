// in this example a function template take its parameters by value. In this case array to pointer 
// conversion occurs. For example string literals are converted to const char *
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
	const int y = 2;
	int &r1 = x;
	const int &r2 = y;
	int a[10] = { 0 };
	int *ptr = &x;

		
	func(x);	// int
	func(a);	// int * -> array to pointer conversion
	func("Mutlu olsaydim ne kadar mutlu olurdum");	// const char *
	func(ptr);	// int *
	func(&ptr); // int **
	func(y); // int 
	func(r1); // int
	func(r2); // int
	cin >> x;

	return 0;
}