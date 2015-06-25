// if a reference(rvalue) is initialized with a reference(lvalue), that reference(rvalue) will be referenced to the variable that lvalue reference
// refers

#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int &r1 = x;
	int &r2 = r1;
	int &r3 = r2;
	
	r1++;
	r2++;
	r3++;

	cout << "x = " << x << endl;
	cin >> x;
	return 0;
}