// an example for reference to a pointer

#include <iostream>

using namespace std;

int main()
{
	int x = 30;
	int y = 50;

	int *ptr = &x;
	int &rx = x;
	int *&rp = ptr;

	rp = &y;
	*rp = rx;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	cin >> x;

	return 0;
}