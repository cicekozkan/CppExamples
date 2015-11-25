// use seekg to set the position in the binary file and get nth prime number
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

	int n;
	int ival;

	for (;;) {
		cout << "kacinci asal sayi : ";
		cin >> n;
		if (n == 0)
			break;
		ifs.seekg((n - 1) * sizeof(int), ios::beg);
		ifs.read(reinterpret_cast<char *>(&ival), sizeof(int));
		cout << ival << endl;
	}

	return 0;
}