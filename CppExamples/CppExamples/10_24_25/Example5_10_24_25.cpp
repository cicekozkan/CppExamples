// show the values of ios::oct, ios::dec, ios::hex and ios::basefield
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	bitset<32> x(ios::oct);
	bitset<32> y(ios::dec);
	bitset<32> z(ios::hex);
	bitset<32> t(ios::basefield);

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	cout << t << endl;

	return 0;
}