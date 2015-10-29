// ostringstream class objects can be used as target stream of ostream_iterator<> 
#include <vector>
#include <string>
#include <algorithm>
#include "cupa.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	randomize();
	vector<string> svec;
	ostringstream os;

	fc(svec, 100, rs);
	copy_if(svec.begin(), svec.end(), ostream_iterator<string>(os, "\n"), [](const string &r) {return r.length() == 6; });

	cout << os.str() << endl;

	return 0;
}