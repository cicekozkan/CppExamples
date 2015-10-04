// In this example a function template swaps its parameters. It is written independent of type; compiler 
// writes necessary template functions when it is called with different type of arguments.
#include<iostream>
#include<string>

template<typename T>
void Swap(T &r1, T&r2)
{
	T temp{ r1 };
	r1 = r2;
	r2 = temp;
}

using namespace std;

int main()
{
	int x = 10, y = 20;
	double d1 = 2.4, d2 = 3.5;
	string s1{ "ozkan" }, s2{ "cicek" };

	cout << "x: " << x << " y: " << y << endl;
	cout << "Swap (x, y)" << endl;
	Swap(x, y);
	cout << "x: " << x << " y: " << y << endl;

	cout << "d1: " << d1 << " d2: " << d2 << endl;
	cout << "Swap (d1, d2)" << endl;
	Swap(d1, d2);
	cout << "d1: " << d1 << " d2: " << d2 << endl;

	cout << "s1: " << s1 << " s2: " << s2 << endl;
	cout << "Swap (s1, s2)" << endl;
	Swap(s1, s2);
	cout << "s1: " << s1 << " s2: " << s2 << endl;

	cin >> x;
		
	return 0;
}