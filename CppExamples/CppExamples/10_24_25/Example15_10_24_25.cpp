// ostringstream class object str member function gets or sets the 
// contents of underlying string device object
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
	ostringstream oss;

	int x = 23;
	int y = 56;
	string s = "mustafa";

	oss << setw(12) << setfill('$') << x << s << y;

	cout << oss.str() << endl;

	return 0;
}