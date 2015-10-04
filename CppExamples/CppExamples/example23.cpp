// you cannot change the value of a constant reference
#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	const int &r = x;

	r = 45;   //gecersiz
	r++;   //gecersiz


	return 0;
}