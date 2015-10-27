// ios_base::flags returns current formatting settings and replaces them with given ones.
// we can invoke this method to read and set a flag
#include <iostream>

using namespace std;

int main()
{
	cout.flags(cout.flags() | ios::boolalpha);   //cout.setf
	cout.flags(cout.flags() & ~ios::boolalpha); //cout.unsetf	
	return 0;
}