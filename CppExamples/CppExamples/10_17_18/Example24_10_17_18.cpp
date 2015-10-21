// example to istream_iterator<> which is a single-pass input iterator that reads successive objects of type T from the 
// std::basic_istream object for which it was constructed, by calling the appropriate operator>>.
// The actual read operation is performed when the iterator is incremented, not when it is dereferenced. 
// The first object may be read when the iterator is constructed or when the first dereferencing is done.
// Otherwise, dereferencing only returns a copy of the most recently read object.
#include <vector>
#include "cupa.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("isimler.txt");
	if (!ifs) {
		cout << "dosya acilamiyor" << endl;
		return 1;
	}

	auto end = istream_iterator<string>(); // The default-constructed std::istream_iterator is known as the end-of-stream iterator.

	vector<string> myvec(istream_iterator<string>(ifs), end);
	display(myvec);

	return 0;
}