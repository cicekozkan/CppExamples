// getting ready for another use case of reference_wrapper<> class template
// in this example a function with a os& parameter implemented
// calling it by value and parsing cout as the argument is OK
// However, we cannot bind this function to another becauase cout 
// cannot be copied

#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

void print(ostream &os, int val, const char *p)
{
	os << val << p;
}

int main()
{
	int x = 456;

	print(cout, x, "\n\n");

	return 0;
}