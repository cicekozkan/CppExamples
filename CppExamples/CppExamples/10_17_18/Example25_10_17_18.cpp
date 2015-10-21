// Function template std::mem_fn generates wrapper objects for pointers to members, which can store, copy, and invoke a pointer to member.
#include <vector>
#include <string>
#include <algorithm>
#include "cupa.h"
#include <iostream>
#include <functional>

using namespace std;

int main()
{
	vector<string> svec;

	randomize();
	fc(svec, 100, rs);
	display(svec);
	transform(svec.begin(), svec.end(), ostream_iterator<size_t>(cout, " "),
		mem_fn(&string::length));

	return 0;
}