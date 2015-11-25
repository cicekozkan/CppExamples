// similar to previous example; except returns 10 prime numbers every time
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
	int a[10];

	for (;;) {
		cout << "kacinci asal sayi : ";
		cin >> n;
		if (n == 0)
			break;
		ifs.seekg((n - 1) * sizeof(int), ios::beg);
		ifs.read(reinterpret_cast<char *>(a), 10 * sizeof(int));
		for (auto x : a)
			cout << x << " ";
		cout << endl;
	}

	return 0;
}