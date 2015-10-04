// in this example a function template prints its arguments' data types
#include<iostream>
#include<string>

using namespace std;

template<class T>
void func(T a, T b)
{
	cout << typeid(T).name() << endl;
}

int main()
{
	int x = 10, y = 2;
	double d1 = 3.1, d2 = 2.5;
	string s1 = "ozkan", s2 = "cicek";

	func(x, y);
	func(d1, d2);
	func(s1, s2);

	cin >> x;

	return 0;
}