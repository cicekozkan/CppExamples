// cannot convert from const T* to T*
#include <iostream>

using namespace std;

int main()
{
	const int x = 234;
	int *ptr = &x;

	return 0;
}