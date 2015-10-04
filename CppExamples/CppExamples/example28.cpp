// you cannot pass a constant value to a function who is expecting a non-constant reference
// and you cannot pass a different type value. 
// Unless your function expects a reference to a constant type
#include <iostream>

using namespace std;

void func(int &r);

int main()
{

	func(10);  //gecersiz
	double d = 12.45;

	func(d);  //gecersiz

	return 0;
}