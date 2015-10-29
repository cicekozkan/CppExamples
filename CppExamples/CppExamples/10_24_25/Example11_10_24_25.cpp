// this example shows a use case of manipulators. They can be used to output variables in different bases
// example to std::setbase which sets the numeric base of the stream. When used in an expression 
// out << setbase(base) or in >> setbase(base), changes the basefield flag of the stream out or in, 
// depending on the value of base.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x = 3425324;
	int y = 9883;

	cout << oct << x << endl << setbase(16) << y << endl;

	return 0;
}