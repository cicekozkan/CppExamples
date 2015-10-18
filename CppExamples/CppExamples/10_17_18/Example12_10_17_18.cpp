// this example demonstrates a possible use of function<> class template 
// in a map
#include <string>
#include <iostream>
#include <functional>
#include <map>

using namespace std;

/**
* A struct with operator() overload
*/
struct Veli {
	int operator()(int x)
	{
		return x + 10;
	}
};

/**
* A global function
*/
int foo(int val)
{
	return val * val;
}

int main()
{
	// map callables with strings
	map<string, function<int(int)>> mymap;

	mymap.insert(make_pair("func1", &foo));
	mymap.insert(make_pair("func2", Veli()));
	mymap.insert(make_pair("func3", [](int x) {return x * x - 1; }));

	cout << mymap["func2"](10) << endl;

	return 0;
}