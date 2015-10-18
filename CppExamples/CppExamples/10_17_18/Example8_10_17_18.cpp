// string::empty binded to a function
#include <string>
#include <iostream>
#include <functional>

using namespace std;
using namespace std::placeholders;

int main()
{
	auto f = bind(&string::empty, _1);

	string s;

	cout << f(s) << endl;

	return 0;
}