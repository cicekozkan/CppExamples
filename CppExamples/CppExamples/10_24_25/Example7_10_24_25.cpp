// this example demonstrates  the structure of a manipulator
// a manipulator's parameter is an ostream& and return type is ostream&
// when you call it with an ostream object; ostream object's operator<<
// overload with a function pointer whose signature is equal to manipulator is called
#include <iostream>
#include <bitset>

using namespace std;
/*
class ostream {
public:
	/////
	ostream &operator<<(ostream &(*fp)(ostream &))
	{
		return fp(*this);
	}
};

ostream& oct(ostream &os)
{
	os.setf(ios::oct, ios::basefield);
	return os;
}
*/
int main()
{
	auto x = cout.flags();

	cout << bitset<32>(x) << endl;

	return 0;
}