// const int reference to const int is OK
#include <iostream>

using namespace std;

int main()
{
	const int x = 234;
	const int &r = x;

	return 0;
}