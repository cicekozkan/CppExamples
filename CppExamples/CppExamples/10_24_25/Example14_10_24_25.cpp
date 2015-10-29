// if you want to format your own developed class's operator>> and operator<< member functions
// use ostringstream class objects
// typedef basic_ostringstream<char> ostringstream 
// The class template std::basic_ostringstream implements output operations on memory (std::basic_string) 
// based streams. It essentially wraps a raw string device implementation (std::basic_stringbuf) 
// into a higher-level interface (std::basic_ostream).
// you can consider ostringstream class object as sprintf in C
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	ostringstream oss;

	int x = 23;
	int y = 56;
	string s = "mustafa";

	oss << x << s << y;

	cout << oss.str() << endl;


	return 0;
}