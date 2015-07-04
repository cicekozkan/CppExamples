// int (*p1)[10] = pointer to an array of 10 elements
#include <iostream>

using namespace std;


int main()
{
	int a[10] = { 0 };
	int *p1 = a;
	int (*p2)[10] = &a;
	
	return 0;
}