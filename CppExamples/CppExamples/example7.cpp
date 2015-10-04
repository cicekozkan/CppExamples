// you cannot assign a constant to a non-const reference. you will get the following error: 
// initial value of reference to non-const must be an lvalue
#include <iostream>


using namespace std;

int main()
{
	int &r = 20;  //gecersiz

	return 0;
}