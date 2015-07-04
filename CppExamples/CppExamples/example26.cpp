// an example to references to pointer
#include <iostream>

using namespace std;

int main()
{
	int x = 56;
	int y = 88;
	int *ptr = &x;
	/////,

	int * &rp = ptr;

	++*rp;

	rp = &y;

	++*rp;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cin >> x;
	return 0;
}