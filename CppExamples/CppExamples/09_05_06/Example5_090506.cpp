// if the function template takes its arguments by reference array to pointer conversion does not occur
#include <iostream>

using namespace std;

template<class T>
void func(T &x)
{
	cout << typeid(T).name() << endl; //int [10]
}

int main()
{
	int a[10] = { 0 };	

	func(a);
	func("ozkan");

	return 0;
}