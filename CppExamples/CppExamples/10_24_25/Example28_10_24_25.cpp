// example to eof flag. when reading a file is completed ifs >> str returns false
// end if end of file is encountered eof flag is set true
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("ali.txt");

	if (!ifs) {
		cout << "dosya acilamadi " << endl;
		return 1;
	}

	string str;

	while (ifs >> str)
		cout << str << endl;

	if (ifs.eof())
		cout << "akim eof durumunda" << endl;

	return 0;
}