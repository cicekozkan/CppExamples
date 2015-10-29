// is_open(): Checks if the file stream has an associated file. 
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs;

	if (ifs.is_open()) {
		cout << "acik dosya var" << endl;
	}
	else
		cout << "acik dosya yok" << endl;

	ifs.open("ornekler.txt");
	if (!ifs) {
		cout << "dosya acilamiyor" << endl;
		return 1;
	}
	cout << "dosya acildi" << endl;

	if (ifs.is_open()) {
		cout << "acik dosya var" << endl;
	}
	else
		cout << "acik dosya yok" << endl;

	ifs.close();

	if (ifs.is_open()) {
		cout << "acik dosya var" << endl;
	}
	else
		cout << "acik dosya yok" << endl;

	return 0;
}