// Read a binary file and display its content
#include "cupa.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("sina.dat", ios::binary);

	if (ifs.fail()) {
		cout << "dosya acilamadi\n";
		return 1;
	}

	int ival;

	cout << hex << uppercase;

	while (ifs.read(reinterpret_cast<char *>(&ival), sizeof(int))) {
		cout << ival;
		getchar();
	}
	return 0;
}