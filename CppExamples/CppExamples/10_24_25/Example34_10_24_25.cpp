// std::basic_istream::read 
// Extracts characters from stream.
// Behaves as UnformattedInputFunction.After constructing and checking the sentry object, 
// extracts characters and stores them into successive locations of the character array whose 
// first element is pointed to by s.Characters are extracted and stored until any of the following conditions occurs :
// count characters were extracted and stored
// end of file condition occurs on the input sequence(in which case, setstate(failbit | eofbit) is called).
// The number of successfully extracted characters can be queried using gcount().
#include "cupa.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream ifs("sina.dat", ios::binary);
	vector<int> ivec;

	if (ifs.fail()) {
		cout << "dosya acilamadi\n";
		return 1;
	}
	int ival;

	while (ifs.read(reinterpret_cast<char *>(&ival), sizeof(ival)))
		ivec.push_back(ival);

	cout << "size = " << ivec.size() << endl;
	random_shuffle(ivec.begin(), ivec.end());

	for (const auto &x : ivec)
		cout << x << " ";
	cout << sl;

	return 0;
}