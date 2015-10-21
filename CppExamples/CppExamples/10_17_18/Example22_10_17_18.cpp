// ostream_iterator passed to copy_if algorithm as an argument
// its ostream_iterator<string>(cout, "\n") specialized instance passed
#include <vector>
#include <string>
#include <algorithm>
#include "cupa.h"
#include <iostream>

using namespace std;

int main()
{
	vector<string> svec;

	randomize();
	int len;

	fc(svec, 100, rs);
	cout << "uzunluk : ";
	cin >> len;

	copy_if(svec.begin(), svec.end(), ostream_iterator<string>(cout, "\n"), [len](const string &r) {return r.size() > len; });	

	return 0;
}