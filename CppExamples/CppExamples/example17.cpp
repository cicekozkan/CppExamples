// int &r = *ptr;
#include <iostream>

using namespace std;


int main()
{
	int x = 10;
	int *ptr = &x;

	int &r = *ptr;


	return 0;
}