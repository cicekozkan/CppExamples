// read integers in a text file till the stream state is fail
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("orhan.txt");

	if (!ifs) {
		cout << "dosya acilamadi..." << endl;
		return 1;
	}
	int ival;

	while (ifs >> ival)
		cout << ival << " ";
	
	cout << endl;

	return 0;
}