// you can get more than one reference to a variable
#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int &r1 = x;
	int &r2 = x;
	int &r3 = x;

	r1++;
	r2++;
	r3++;

	cout << "x = " << x << endl;
	cin >> x;

	return 0;
}