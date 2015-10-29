// example to std::setiosflags. When used in an expression out << setiosflags(mask) or in >> setiosflags(mask), 
// sets all format flags of the stream out or in as specified by the mask. 
// str << setiosflags(mask) or str >> setiosflags(mask) behaves as if the following code was executed :
// str.setf(mask);
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x = 3425324;
	int y = 9883;

	cout.setf(ios::boolalpha | ios::showbase | ios::uppercase);
	cout << x;
	cout << endl;

	cout << hex << setiosflags(ios::boolalpha | ios::showbase | ios::uppercase) << x << endl << y << endl;

	return 0;
}