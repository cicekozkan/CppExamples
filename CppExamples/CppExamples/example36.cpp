// int (*p)[20] = pointer to an array of 20 elements
// int a[5][20] = 2 dimensional array. you can use a to initalize int (*p)[20]

#include <iostream>

using namespace std;


int main()
{
	int a[5][20];

	int(*p)[20] = a;

	return 0;
}