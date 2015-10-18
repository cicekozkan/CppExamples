// string::length binded and parsed as an argument to transform algorithm
#include <vector>
#include <string>
#include <algorithm>
#include "cupa.h"
#include <iostream>
#include <list>
#include <functional>

using namespace std;
using namespace std::placeholders;

int main()
{
	vector<string> svec;
	list<size_t> mylist;

	randomize();
	fc(svec, 100, rs);
	display(svec);
	transform(svec.begin(), svec.end(), back_inserter(mylist), bind(&string::length, _1));
	display(mylist);

	return 0;
}