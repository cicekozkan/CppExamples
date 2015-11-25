// std::basic_istream::seekg
// Sets input position indicator of the current associated streambuf object.
// std::basic_istream::tellg
// Returns input position indicator of the current associated streambuf object. 
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("sina.dat", ios::binary);

	if (!ifs) {
		cout << "dosya acilamadi..." << endl;
		return 1;
	}

	ifs.seekg(0, ios::end);

	cout << ifs.tellg() << endl;

	return 0;
}