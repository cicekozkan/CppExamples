// example to functions returning references 
#include <iostream>
#include <cstring>

using namespace std;

int &foo(int &r)
{
	r *= 10;
	return r;
}

int &func(int &r)
{
	r++;
	return foo(r);
}

int main()
{
	int x = 10;

	int &r = func(x);

	--r;

	cout << "x = " << x << endl;
	cin >> x;
	return 0;
}