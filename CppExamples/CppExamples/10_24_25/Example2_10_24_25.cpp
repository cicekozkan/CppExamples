// boolalpha type is ftmflags which can be bitwise manipulated
#include <iostream>
#include <bitset>

using namespace std;



int main()
{
	bitset<32> x(ios::boolalpha);

	cout << x << endl;

	return 0;
}