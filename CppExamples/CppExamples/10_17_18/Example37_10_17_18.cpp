// repeat some STL algorithms: set_union, set_intersection, set_difference, set_symmetric_difference
#include <vector>
#include <string>
#include <algorithm>
#include "cupa.h"
#include <iostream>
#include <set>

using namespace std;

int main()
{
	randomize();
	vector<string> svec;
	set<string> myset;

	fc(myset, 10, rs);
	display(myset);
	fc(svec, 10, rs);
	sort(svec.begin(), svec.end());
	display(svec);

	//set_union(myset.begin(), myset.end(), svec.begin(), svec.end(), ostream_iterator<string>(cout, "\n"));
	//set_intersection(myset.begin(), myset.end(), svec.begin(), svec.end(), ostream_iterator<string>(cout, "\n"));
	//set_difference(myset.begin(), myset.end(), svec.begin(), svec.end(), ostream_iterator<string>(cout, "\n"));
	set_symmetric_difference(myset.begin(), myset.end(), svec.begin(), svec.end(), ostream_iterator<string>(cout, "\n"));

	return 0;
}