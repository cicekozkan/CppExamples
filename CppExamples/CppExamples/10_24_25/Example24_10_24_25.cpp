// explore stream state flags
// goodbit 	no error
// badbit 	irrecoverable stream error
// failbit 	input / output operation failed(formatting or extraction error)
// eofbit 	associated input sequence has reached end - of - file
#include <iostream>

using namespace std;

int main()
{
	cout << "bir sayi girin : ";

	int x;

	cin >> x;

	if (cin.good())
		cout << "akim good durumunda" << endl;
	else
		cout << "akim good durumunda degil " << endl;

	if (cin.fail())
		cout << "akim fail durumunda" << endl;
	else
		cout << "akim fail durumunda degil " << endl;

	if (cin.eof())
		cout << "akim eof durumunda" << endl;
	else
		cout << "akim eof durumunda degil " << endl;

	if (cin.bad())
		cout << "akim bad durumunda" << endl;
	else
		cout << "akim bad durumunda degil " << endl;

	return 0;
}