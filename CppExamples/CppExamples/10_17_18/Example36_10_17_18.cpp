// transform algorithm can be applied and the result can be saved on the same container
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
	fc(svec, 10, rs);
	string s;
	cout << "bir string girisi yapin : ";
	cin >> s;

	transform(svec.begin(), svec.end(), svec.begin(), [s](string &r) {return r + s; });

	display(svec);

	return 0;
}