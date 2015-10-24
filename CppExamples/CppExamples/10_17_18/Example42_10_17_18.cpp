// example to partition
// Reorders the elements in the range [first, last) in such a way that all elements for which 
// the predicate p returns true precede the elements for which predicate p returns false. 
// Relative order of the elements is not preserved
#include <vector>
#include <string>
#include <algorithm>
#include "cupa.h"
#include <iostream>

using namespace std;

int main()
{
	vector<string> svec;

	fc(svec, 50, rs);
	display(svec);
	char c;

	cout << "hangi harfe gore partisyon yapilsin : ";
	cin >> c;

	auto iter = partition(svec.begin(), svec.end(), [c](const string &r) {return r.find(toupper(c)) != string::npos || r.find(tolower(c)) != string::npos; });
	display(svec);
	cout << *iter << endl;


	return 0;
}