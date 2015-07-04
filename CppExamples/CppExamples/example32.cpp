// pointer to pointer
#include <iostream>

using namespace std;


int main()
{
	int x = 30;
	int *ptr = &x;
	int **p = &ptr;

	return 0;
}