// references as function arguments
#include <iostream>

using namespace std;


void iswap(int &r1, int &r2)
{
	int temp = r1;
	r1 = r2;
	r2 = temp;
}

int main()
{
	int x = 45, y = 99;

	iswap(x, y);

	cout << "x =  " << x << endl;
	cout << "y =  " << y << endl;
	cin >> x;
	return 0;
}