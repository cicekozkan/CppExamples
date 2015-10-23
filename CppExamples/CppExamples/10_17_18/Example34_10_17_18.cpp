// Pointer-to-member function doesn't hold the "exact address" like a regular pointer does. 
// We can imagine it holds the "relative address" of where the function is in the class layout. 
// Define these pointers in class scope Class::*fp
// of course auto keyword handles all of these for us
// We can call these member functions with .* operator. Pay attention to operator precedence!
#include <iostream>

using namespace std;

class Myclass {
public:
	int func(int val)
	{
		cout << "this = " << this << endl;
		return val * val + 1;
	}

};

int main()
{
	int(Myclass::*fp)(int) = &Myclass::func;
	auto fx = &Myclass::func;
	Myclass m;
	cout << "&m = " << &m << endl;

	cout << (m.*fp)(20) << endl;

	return 0;
}