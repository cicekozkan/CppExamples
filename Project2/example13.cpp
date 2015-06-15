// a reference is actually a low-level(const) pointer to a variable
// this example demonstrates that
#include <iostream>

using namespace std;

int main()
{
	int x = 34;
	int &r1 = x;
	int *const ptr = &x;
	int const &r2 = x;
	
	r1 = 45;		// same
	*ptr = 45;		// same 
	r2 = 45;		// you cannot assign to a variable that is const

	return 0;
}