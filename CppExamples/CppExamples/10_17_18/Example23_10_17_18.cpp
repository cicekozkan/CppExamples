// ofstream can be passed to ostream_iterator as an argument
#include <vector>
#include <string>
#include <algorithm>
#include "cupa.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	vector<string> svec;

	randomize();
	int len;

	fc(svec, 100, rs);
	cout << "uzunluk : ";
	cin >> len;
	ofstream ofs("isimler.txt");
	
	copy_if(svec.begin(), svec.end(), ostream_iterator<string>(ofs, "\n"), [len](const string &r) {return r.size() > len; });

	return 0;
}