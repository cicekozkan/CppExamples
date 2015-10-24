// partial_sort: sorts the elements such that the range [begin,middle) contains sorted elements
// in the range [first,end)
#include <vector>
#include <string>
#include "cupa.h"
#include <iostream>

using namespace std;

int main()
{
	vector<string> svec;

	fc(svec, 200, rs);
	partial_sort(svec.begin(), svec.begin() + 5, svec.end());

	display(svec);

	return 0;
}